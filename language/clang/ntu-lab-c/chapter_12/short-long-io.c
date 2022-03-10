#include <stdio.h>
#include <string.h>
int main (void) {
	int integer;
	long int longInteger;
	short int shortInteger;
	long long int longlongInteger;
	scanf("%d", &integer);
	scanf("%ld", &longInteger);
	scanf("%hd", &shortInteger);
	scanf("%lld", &longlongInteger);
	printf("%d\n", integer);
	printf("%ld\n", longInteger);
	printf("%hd\n", shortInteger);
	printf("%lld\n", longlongInteger);
	return 0;
}
