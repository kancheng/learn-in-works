#include <stdio.h>

int main (void) {
	char s[] = { 'm', 'a', 'i', 'n', '(', ')', '\n', '{', '\n', '}', '\n'};
	int length = sizeof(s) / sizeof(char);
	for (int i = 0; i < length; i++) {
		printf("%c", s[i]);
	}
	return 0;
}
