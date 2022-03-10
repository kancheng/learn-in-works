#include <stdio.h>
#include <stdbool.h>
int main () {
	int i;
	scanf("%d", &i);
	int k = (i > 0)? i: -i;
	printf("%d\n", k);
}