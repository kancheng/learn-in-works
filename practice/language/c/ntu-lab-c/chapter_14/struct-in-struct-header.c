#include <stdio.h>
#include "student.h"
// main
int main (void) {
	Student kan = {"Kan Horst", 12345, "1234567", 
		{ 4.0, 3.9, 3.8, 3.6}, {2000, 1, 1}};
	printf("name is %s\n", kan.name);
	printf("id is  %d\n", kan.id);
	printf("phone is %s\n", kan.phone);	
	printf("grade is %f %f %f %f \n", kan.grade[0], kan.grade[1], kan.grade[2], kan.grade[3]);	
	printf("birthYear is %d\n", kan.birthday.year);	
	printf("birthMonth is %d\n", kan.birthday.month);	
	printf("birthDay is %d\n", kan.birthday.day);
	return 0;
}