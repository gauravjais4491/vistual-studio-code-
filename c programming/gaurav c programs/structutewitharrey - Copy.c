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
	struct student S[5];
	int i;
    for(i=0;i<5;i++)
   {
	scanf("%s%f%d",&S[i].name,&S[i].marks,&S[i].rollno); 
   }
   for(i=0;i<5;i++)
   {
   	printf("%s%f%d",S[i].name,S[i].marks,S[i].rollno);
   }
}
