#include <stdio.h>
// complex
struct complex {
	int real;
	int imag;
};
typedef struct complex Complex;
// add
void addComplex (const struct complex *a, 
	const struct complex *b, Complex *c) {
	c->real = a->real + b->real;
	c->imag = a->imag + b->imag;
	return;
}
void mulComplex(const struct complex *a,
	const struct complex *b, Complex *c) {
	c->real = a->real * b->real - a->imag * b->imag;
	c->imag = a->real * b->imag + a->imag * b->real;
	return;
}
void printfComplex(const Complex *a) {
	printf("%d + %di\n", a->real, a->imag);
	return;
}
// main
int main (void) {
	Complex a,b,c;
	scanf("%d", &(a.real));
	scanf("%d", &(a.imag));
	scanf("%d", &(b.real));
	scanf("%d", &(b.imag));

	addComplex(&a, &b, &c);
	printfComplex(&c);
	mulComplex(&a, &b, &c);
	printfComplex(&c);
	return 0;
}