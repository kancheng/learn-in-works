#include <stdio.h>
int i;
void foo(void)
{
	i++;
	printf("foo : i = %d\n", i);
}
int main (int argc, char *argv[]) {
	int i = 10;
	foo();
	printf("main : i = %d\n", i);
	return 0;
}
