#include <stdio.h>
#define NAMELEN 20
#define PHONELEN 10
#define YEAR 4

struct student {
	char name[NAMELEN];
	int id;
	char phone[PHONELEN];
	float grade[YEAR];
	int birthYear, birthMonth, birthDay;
};
int main (void) {
	struct student kan;
	printf("sizeof(kan) = %ld\n", sizeof(kan));
	return 0;
}
