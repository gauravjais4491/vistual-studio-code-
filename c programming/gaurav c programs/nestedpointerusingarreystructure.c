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
	struct student s[2];
	struct student *p;
	p=&s;
	int i;
	for(i=0;i<2;i++)
	{
		scanf("%s%d%f",&s[i].name,&s[i].rollno,&s[i].marks);
	}
	for(i=0;i<2;i++)
	{
			printf("name:%s\n roll no:%d\n marks:%f\n",p->name,p->rollno,p->marks);
			p++;
	}
}
