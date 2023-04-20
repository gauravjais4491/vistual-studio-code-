#include<stdio.h>
#include<string.h>
union student
{
	char name[30];
	int roll;
	float marks;
};
main()
{
	union student s1;
	strcpy(s1.name,"gaurav kumar jaiswal");
	printf("%s\n",s1.name);
	s1.roll=24;
	printf("%d\n",s1.roll);
	s1.marks=45;
	printf("%f\n",s1.marks);
	printf("%d",sizeof(s1));
}
