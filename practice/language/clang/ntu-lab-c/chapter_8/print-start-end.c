#include <stdio.h> // e.g. for printf scanf
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h> // e.g. for abs
#include <math.h> // e.g. for sin

void printfNumbers(int start, int end) {
	for (int i = start; i <= end; i++)
		printf("%d\n", i);
	return;
}

int main (void) {
	int a, b;
	scanf("%d%d", &a, &b);
	assert(a <= b);
	printfNumbers(a, b);
	return 0;
}