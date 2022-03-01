#include <stdio.h>

int main () {
	int k;
	scanf("%d", &k);
	int i = 1, sum = 0;
	while (i <= k) {
		sum += i;
		i++;
	}
	printf("%d\n", sum);
}