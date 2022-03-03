#include <stdio.h>

int main (void) {
	int *iptr;
	float *fptr;
	double *dptr;
	printf(" sizeof(iptr) = %lu\n", sizeof(iptr));
	printf(" sizeof(fptr) = %lu\n", sizeof(fptr));
	printf(" sizeof(dptr) = %lu\n", sizeof(dptr));
	return 0;
}
