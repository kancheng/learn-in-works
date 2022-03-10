#include <stdio.h> // e.g. for printf scanf
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h> // e.g. for abs
#include <math.h> // e.g. for sin
bool leapYear(int y);

int main (void) {
	int year;
	while (scanf("%d", &year) != EOF) {
		assert (year > 0);
		printf("%d\n", leapYear(year));
	}
	return 0;
}
bool leapYear (int y) {
	return ((y % 400 == 0) || ((y % 4 == 0) && !(y % 100 == 0)));
}
