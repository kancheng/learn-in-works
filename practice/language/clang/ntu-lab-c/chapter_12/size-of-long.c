#include <stdio.h>
#include <string.h>
int main (void) {
	long int i;
	printf("%ld\n", sizeof(i));
	scanf("%ld", &i);
	printf("%ld\n", i);
	i++;
	printf("%ld\n", i);
	return 0;
}
