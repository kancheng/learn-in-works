// header
#include <stdio.h> // e.g. for printf scanf
#include <stdbool.h>
#include <stdlib.h> // e.g. for abs
#include <math.h> // e.g. for sin
#include <assert.h>

bool leapYear(int y) {
		return((y % 400 == 0) || (y % 4 == 0) && !(y % 100 == 0));
}
int main (void) {
	int year;
	scanf("%d", &year);
	assert(year > 0);
	printf("%d\n", leapYear(year));
	return 0;
}