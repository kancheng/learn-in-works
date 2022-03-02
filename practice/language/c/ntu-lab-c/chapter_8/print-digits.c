#include <stdio.h> // e.g. for printf scanf
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h> // e.g. for abs
#include <math.h> // e.g. for sin
#define MAXDIGITS 40

void printDigits(int number) {
	if (number < 0)
		return;
	int index = 0;
	int digits[MAXDIGITS];
	while (number != 0) {
		digits[index] = (number % 10);
		number /= 10;
		index++;
	}
	for (int i = index; i >= 0; i--)
		printf("%d\n", digits[i]);
	return;
}

int main (void) {
	int number;
	scanf("%d", &number);
	printDigits(number);
	return 0;
}