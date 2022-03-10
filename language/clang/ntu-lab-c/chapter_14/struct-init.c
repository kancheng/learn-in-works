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
	struct student kan = {"Kan Horst", 12345, "1234567", 
		{ 4.0, 3.9, 3.8, 3.6}, 2000, 1, 1};
	printf("name is %s\n", kan.name);
	printf("id is  %d\n", kan.id);
	printf("phone is %s\n", kan.phone);	
	printf("grade is %f %f %f %f \n", kan.grade[0], kan.grade[1], kan.grade[2], kan.grade[3]);	
	printf("birthYear is %d\n", kan.birthYear);	
	printf("birthMonth is %d\n", kan.birthMonth);	
	printf("birthDay is %d\n", kan.birthDay);
	return 0;
}
