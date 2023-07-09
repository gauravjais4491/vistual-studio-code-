#include<stdio.h>
main()
{
	float R,V,b,I,B;
	printf("enter the value of V\n");
	scanf("%f",&V);
	printf("enter the value of B\n");
	scanf("%f",&B);
	printf("enter the value of I\n");
	scanf("%f",&I);
	printf("enter the value of b\n");
	scanf("%f",&b);
	R=(V*b)/(I*B);
	printf("R is %f", R);
	
}
