#include <stdio.h>
#include <stdbool.h>
int main () {
	int base, power, exponent;
	scanf("%d%d", &exponent, &base);
	switch (exponent) {
		case 1:
			power = base;
			break;
		case 2:
			power = base * base;
			break;
		case 3: 
			power = base * base * base;
			break;
		default:
			power = 0;
	}
	printf("%d\n", power);
}