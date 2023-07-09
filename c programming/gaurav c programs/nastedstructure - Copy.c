//       NESTED STRUCTURE

#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int roll;
	float marks;

   struct address
   {
   	int hno;
   	char street[30];
   	char city[10];
   	int pin;
   }a;
};
main()
{
 struct student s[2];
 int i;
 for(i=0;i<2;i++)
 {
 	scanf("%s%d%f",&s[i].name,&s[i].roll,&s[i].marks);
 	scanf("%d%s%s%d",&s[i].a.hno,&s[i].a.street,&s[i].a.city,&s[i].a.pin);
 }
 for(i=0;i<2;i++)
{
	printf(" name:%s\n roll no:%d\n marks:%f\n",s[i].name,s[i].roll,s[i].marks);
	printf("house number:%d\n street:%s\n city:%s\n pin:%d\n",s[i].a.hno,s[i].a.street,s[i].a.city,s[i].a.pin);
}
}
