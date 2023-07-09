#include<stdio.h>
#include<string.h>

struct student
{
	char name[30];
	float marks;
	int rollno;
};
main()
{
	struct student S1,S2;
	strcpy(S1.name,"gaurav kumar jaiswal");
	S1.marks=80;
	S1.rollno=1;
	printf("%s,%f,%d",S1.name,S1.marks,S1.rollno);
}
