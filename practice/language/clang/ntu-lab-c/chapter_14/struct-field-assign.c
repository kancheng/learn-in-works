#include <stdio.h>
#include <string.h>
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
// main
int main (void) {
	struct student kan;
	strcpy(kan.name, "Kan Horst");
	kan.id = 12345;
	strcpy(kan.phone, "1234567");
	kan.grade[0] = 4.0;
	kan.grade[1] = 3.9;
	kan.grade[2] = 3.8;
	kan.grade[3] = 3.6;
	kan.birthDay = 1;
	kan.birthYear = 2022;
	kan.birthMonth = 1;
	// print
	printf("name is %s\n", kan.name);
	printf("id is %d\n", kan.id);
	printf("phone is %s\n", kan.phone);
	printf("grade is %f %f %f %f \n", kan.grade[0], kan.grade[1], kan.grade[2], kan.grade[3]);
	printf("birthYear is %d\n", kan.birthYear);
	printf("birthMonth is %d\n", kan.birthMonth);
	printf("birthDay is %d\n", kan.birthDay);
	return 0;
}
