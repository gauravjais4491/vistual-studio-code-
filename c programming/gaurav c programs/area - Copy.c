#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,area,s;
	printf("enter the value of variables");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of traingle is %f",area);
	getch();
}



