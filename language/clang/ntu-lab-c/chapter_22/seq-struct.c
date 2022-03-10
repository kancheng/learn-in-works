#include <stdio.h>

int main () {
	int i, j, k, sum = 0;
	scanf("%d", &k);
	if (k > 0)
		i = 10;
	else
		i = 20;
	for (k = 0; k < 10; k++)
		sum += k;
	return 0;
}
