#include <stdio.h>
#include <stdbool.h>
int main () {
	int n;
	scanf("%d", &n);
	bool prime = true;
	for (int i = 2; (i * i) <= n; i++)
		if ((n % i) == 0)
			prime = false;
	printf("%d\n", prime);
}