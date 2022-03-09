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
	printf("name is %p\n", &(kan.name));
	printf("id is  %p\n", &(kan.id));
	printf("phone is %p\n", &(kan.phone));	
	printf("grade is %p\n", &(kan.grade));	
	printf("birthYear is %p\n", &(kan.birthYear));	
	printf("birthMonth is %p\n", &(kan.birthMonth));	
	printf("birthDay is %p\n", &(kan.birthDay));
	return 0;
}