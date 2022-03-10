#include <stdio.h>

int main (void) {
	int i;
	int *iptr = &i;
	scanf("%d", &i);
	printf("iptr = %p\n", iptr);
	printf("&iptr = %p\n", &iptr);
	printf("*iptr = %d\n", *iptr);
	printf("*(&iptr) = %p\n", *(&iptr));
	printf("&(*iptr) = %p\n", &(*iptr));
	printf("*(*(&iptr)) = %d\n", *(*(&iptr)));
	printf("*(&(*iptr)) = %d\n", *(&(*iptr)));
	printf("&(*(&iptr)) = %p\n", &(*(&iptr)));
	printf("i = %d\n", i);
	printf("&i = %p\n", &i);
	printf("*(&i) = %d\n", *(&i));
	return 0;
}
