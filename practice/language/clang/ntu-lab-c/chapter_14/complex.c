#include <stdio.h>
// complex
struct complex {
	int real;
	int imag;
};
// add
struct complex addComplex (struct complex a, struct complex b) {
	struct complex c;
	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;
	return c;
}
struct complex mulComplex(struct complex a, struct complex b) {
	struct complex c;
	c.real = a.real * b.real - a.imag * b.imag;
	c.imag = a.real * b.imag + a.imag * b.real;
	return c;
}
void printfComplex(struct complex a) {
	printf("%d + %di\n", a.real, a.imag);
	return;
}
// main
int main (void) {
	struct complex a,b,c;
	scanf("%d", &(a.real));
	scanf("%d", &(a.imag));
	scanf("%d", &(b.real));
	scanf("%d", &(b.imag));

	c = addComplex(a, b);
	printfComplex(c);
	c = mulComplex(a, b);
	printfComplex(c);
	return 0;
}