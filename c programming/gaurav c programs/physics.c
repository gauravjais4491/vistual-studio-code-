#include<stdio.h>
#include<string.h>
main()
{
	int E,B,v,q,a;
	
	float f,c;
	printf("enter the value of electric field\n");
	scanf("%d",&E);
	printf("enter the value of magnetic field\n");
	scanf("%d",&B);
	printf("enter the angle between magnetic field and charged particle\n");
	scanf("%d",&a);
	printf("enter the charge of the particle\n");
	scanf("%d",&q);
	printf("enter the velocity of particle\n");
	scanf("%d",&v);
	c=a*(180/3.14);
	f=((q*E)+(q*(v*B*sin(c)));
	printf("%f",f);
}
