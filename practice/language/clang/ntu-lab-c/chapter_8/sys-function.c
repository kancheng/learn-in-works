// header
#include <stdio.h> // for printf scanf
#include <stdbool.h>
#include <stdlib.h> // for abs
#include <math.h> // for sin


int main () {
	int i;
	scanf("%d", &i);
	// abs
	int j = abs(i);
	// endabs
	printf("%d\n", j);

	double x;
	scanf("%lf", &x);

	// sin
	double y = sin(x);

	// endsin
	printf("%f\n", y);
}