#include <stdio.h>
#include <string.h>

int main (void) {
	char string1[80] = "programming";
	char string2[] = "programming";
	char *string3 = "programming";
	printf("%s\n", string1);
	// OK
	strcpy(string1, "more programming");
	printf("%s\n", string1);
	// Buffer Overrun
	// strcpy(string2, "more programming");
	// ERROR
	// strcpy(string3, "more programming");
	return 0;
}
