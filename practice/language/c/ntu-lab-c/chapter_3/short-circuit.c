#include <stdio.h>
#include <stdbool.h>
int main () {
	int i, j;
	scanf("%d%d", &i, &j);

	int k = 3, l = 4;
	if ((k = i) > 0 || (l = j) > 0) {
		printf("%d\n", k);
		printf("%d\n", l);
	}
}