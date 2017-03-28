#include "course.h"

typedef struct course {
	int course_number;
	char* course_name;
	int semester_number;
}course;

void course_create(int course_number, char* course_name, int semester_number)
{
	course *course1 = alloc();
	course1->course_number = course_number;
	course1->course_name = course_name;
	course1->semester_number = semester_number;
}
void* alloc(void) {
	course* temp=(course *)malloc(sizeof(course));
	return temp;
}
void print_course()
{
	course course1;
	char* temp = course1.course_name;
	print("%d ", course1.course_name);
	while (temp != 0)
	{
		print("%c", temp);
		temp=temp + 1;
	}
	print(" %d", course1.semester_number);

}