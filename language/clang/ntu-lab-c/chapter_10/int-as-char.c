#include <stdio.h>
int main(void) {
	int c;
	c = 109;
	printf("%c", c);
	c = 97;
	printf("%c", c);
	c = 105;
	printf("%c", c);
	c = 110;	
	printf("%c", c);
	c = 40;	
	printf("%c", c);
	c = 41;	
	printf("%c", c);
	c = 10;	
	printf("%c", c);
	c = 123;
	printf("%c", c);
	c = 10;	
	printf("%c", c);
	c = 125;
	printf("%c", c);
	c = 10;
	printf("%c", c);
	printf("\n=====================\n");
	char s;
	char z =  'E';
	char x =  70;
	int  y =  71;
	int  h = 'H';
	printf("z = %c, z = %d\n", z, z);
	printf("x = %c, x = %d\n", x, x);
	printf("y = %c, y = %d\n", y, y);
	printf("h = %c, h = %d\n", h, h);
	printf("Enter a character: ");
	scanf("%c", &s);
	// %d displays the integer value of a character
	// %c displays the actual character
	printf("ASCII value of %c = %d", s, s);
	printf("\n");
	return 0;
}