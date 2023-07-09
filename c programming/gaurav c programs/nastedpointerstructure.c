#include<stdio.h>
#include<string.h>
struct student
{
	char name [50];
	int rollno;
	float marks;
	
};
main()
{
	struct student s;
	struct student *p;
	p=&s;
	strcpy(s.name,"gaurav kumar jaiswal");
	s.rollno=24;
	s.marks=100;
	printf("name:%s\n roll no:%d\n marks:%f\n",p->name,p->rollno,p->marks);
}
