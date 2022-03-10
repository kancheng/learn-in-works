#include <stdio.h>

int main (void) {
	int i = 1;
	int j = 2;
	int *ptrToInt = &i;
	const int * ptrToConstInt = &i;
	int * const constPtrToInt = &i;
	const int * const constPtrToConstInt = &i;
	ptrToInt = &j; // OK
	*ptrToInt += 3; // OK
	ptrToConstInt = &j; // OK
	*ptrToConstInt += 3; // Not OK
	constPtrToInt = &j; // Not OK
	*constPtrToInt += 3; // OK
	constPtrToConstInt = &j; // Not OK
	*constPtrToConstInt += 3; // Not OK
	return 0;
}
