#include<stdio.h>
#include<string.h>
struct student
{
	char name [20];
	int rollno;
	float marks;
	
};
main()
{
	struct student s;
	struct student *p;
	p=&s;
	strcopy(s.name,"abc");
	s.rollno=6;
	s.marks=100;
	printf("%s%d%f",p->name,p->rollno,p->marks);
}
