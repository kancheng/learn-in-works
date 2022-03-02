#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int main () {
	int start, end;
	scanf("%d%d", &start, &end);
	assert(start <= end);
	for (int i = start; i <= end; i++)
		printf("%d ", i);
}