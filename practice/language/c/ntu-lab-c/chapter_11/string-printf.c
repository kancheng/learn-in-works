#include <stdio.h>
#define STRINGLEN 80
int main (void) {
	char s[STRINGLEN] = { 'm', 'a', 'i', 'n', '(', ')', '\n', '{', '\n', '}', '\n', '\0'};
	int length = sizeof(s) / sizeof(char);
	printf("%s", s);
	return 0;
}
