#include <stdio.h>
#include <stdlib.h>
int values[] = {2147483637, -2147483648, 100, 90, 20, 25};
int compare (const void * a, const void * b) {
	return (*(int*)a - *(int*)b );
}
int main(void)
{
	int n;
	qsort (values, 6, sizeof(int), compare);
	for (n = 0; n < 6; n++)
		printf("%d ", values[n]);
	return 0;
}
