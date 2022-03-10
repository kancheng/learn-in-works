// declaration
#include <stdio.h>
#include <assert.h>
#define NAMELAN 20
#define PHONENUM 10
#define GRADE 4
struct student {
	char name[NAMELAN];
	int id;
	char phone[PHONENUM];
	float grade[GRADE];
	int year;
	int month;
	int day;
};
typedef struct student Student;
void print_student(Student *s) {
	puts(s->name);
	printf("id = %d ", s->id);
	puts(s->phone);
	printf(" grade = %f %f %f %f \n", s->grade[0], s->grade[1], s->grade[2], s->grade[3]);
	printf(" %d %d %d\n", s->year, s->month, s->day);
}
// main
int main(void) {
	Student a[3] = {{"Kan Horst", 12345, "1234567", { 3.0, 3.0, 3.0, 3.0}, 2000, 1, 1},
	{"Kan Jun", 67890, "7654321", { 4.0, 4.0, 4.0, 4.0}, 2022, 1, 1},
	{"Kan Cheng", 34567, "4321765", { 2.0, 2.0, 2.0, 2.0}, 2022, 3, 3}};
	Student b;

	FILE *fp = fopen("file", "wb");
	assert(fp != NULL);
	fwrite(a, sizeof(Student), 2, fp);
	fclose(fp);
	// seek
	fp = fopen("file", "rb");
	assert(fp != NULL);
	fseek(fp, 1 * sizeof(Student), SEEK_SET);
	fread(&b, sizeof(Student), 1, fp);
	print_student(&b);
	fseek(fp, -2 * sizeof(Student), SEEK_CUR);
	fread(&b, sizeof(Student), 1, fp);
	print_student(&b);
	fseek(fp, -1 * sizeof(Student), SEEK_END);
	fread(&b, sizeof(Student), 1, fp);
	print_student(&b);
	fclose(fp);
	return 0;
}