#include <stdio.h>
int main () {
	int i = 1; 
	int j = 2;
	int k = 3;
	scanf("%d", &i);
	k = j = i;
	printf("%d\n", i);
	printf("%d\n", j);
	printf("%d\n", k);
}