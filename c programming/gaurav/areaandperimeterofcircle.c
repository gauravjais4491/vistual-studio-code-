#include<stdio.h>
main()
{
	int r;
	float area_of_circle,perimeter_of_circle;
	float pie;
	printf("enter the value\n ");
	scanf("%d",&r);
	pie=3.14;
	area_of_circle=pie*r*r;
	printf("area_of_circle is %f\n",area_of_circle);
	perimeter_of_circle=2*pie*r;
	printf("perimeter_of_circle_is %f\n",perimeter_of_circle);
}
