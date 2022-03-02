// header
#include <stdio.h> // for printf scanf
#include <stdbool.h>
#include <stdlib.h> // for abs
#include <math.h> // for sin

int main () {
	int sum = 0, count = 0, i;
	while (scanf("%d", &i) != EOF) {
		sum += i;
		count++;
	}
	printf("%d\n", sum / count);
	return 0;
}