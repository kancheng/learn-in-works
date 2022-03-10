#include <stdio.h>
int main () {
	int i, k;
	scanf("%d", &i);
	if (i > 0)
		k = i;
	else
		k = -i;
	printf("%d\n", k);
}