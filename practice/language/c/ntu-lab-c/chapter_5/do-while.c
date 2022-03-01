#include <stdio.h>
#include <stdbool.h>
int main () {
	int i;
	scanf("%d", &i);
	do
		i++;
	while (i < 0);
	printf("%d\n", i);
}