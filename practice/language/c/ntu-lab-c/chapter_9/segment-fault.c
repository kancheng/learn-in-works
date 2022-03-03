#include <stdio.h>

int main (void) {
	int *iptr;
	iptr = NULL;
	// NULL 不能指向任何有效的記憶體位址
	// 沒有經過正確的初始化
	printf("*iptr = %d/n", *iptr);
	return 0;
}
