#include <stdio.h>
#include <stdbool.h>
int main () {
	for (int i = 1; i <= 9; i++)
		for (int j = 1; j <= 9; j++)
			printf("%d x %d =  %d\n", i, j, i * j);
}