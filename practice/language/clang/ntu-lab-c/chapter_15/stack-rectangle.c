#include <stdio.h>
#include <stdbool.h>
// paper
typedef struct paper {
	int width;
	int height;
} Paper;
// On Top
bool onTop (Paper a, Paper b) {
	return (a.width <= b.width && a.height <= b.height) || (a.width <= b.height && a.height <= b.width);
}
// solution
typedef struct solution {
	int layer;
	int sum;
} Solution;
// better
Solution better (Solution a, Solution b) {
	return (a.layer > b.layer || (a.layer == b.layer && a.sum > b.sum)? a : b);
}
// best
Solution best (int index, int n, Paper top, Paper papers[], Solution solution) {
	if (index >= n)
		return solution;

	if (onTop(papers[index], top)) {
		Solution placed = {solution.layer + 1, solution.sum + index};
		return better (
			best ( index + 1, n, papers[index], papers, placed ), 
			best ( index + 1, n, top, papers, solution)
		);
	} else {
		return (best ( index + 1, n, top, papers, solution));
	}
}

// best End
#define BOTTOM 100000

void printSolution (Solution solution) {
	printf("%d %d\n", solution.layer, solution.sum);
}
// main
int main (void) {
	int n;
	scanf("%d", &n);
	Paper papers[n];
	for (int i = 0; i < n; i++)
		scanf("%d%d", &(papers[i].width), &(papers[i].height));
	Paper bottom = {BOTTOM, BOTTOM};
	Solution zero = {0, 0};
	printSolution(best(0, n, bottom, papers, zero));
	return 0;
}

/*
0 0 0 5 0 6 0 0 0 
1 0 7 0 0 0 5 9 2
5 0 4 0 1 7 6 0 0
8 0 0 0 0 9 0 4 0
9 0 0 3 6 4 0 0 7
0 4 0 2 0 0 0 0 9
0 0 5 8 9 0 1 0 4
2 9 8 0 0 0 7 0 5
0 0 0 7 0 2 0 0 0
*/