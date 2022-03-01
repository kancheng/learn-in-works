#include <stdio.h>
int main () {
	int i;
	scanf("%d", &i);
	int k = i / 10;
	printf("%d\n", k);
	k = i % 10;
	printf("%d\n", k);
}