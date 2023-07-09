#include<stdio.h>
#include<conio.h>
main()
{
int a;
printf("enter the a");
scanf("%d",&a);
if(a>=90 && a<100)
{
printf("marks is 5");
}
else if(a>=85 && a<90)
{
printf("marks is 4");
}
else if(a>=80 && a<85)
{
    printf("marks is 3");
}
else if(a>=75 && a<80 )
{
    printf("marks is 2");
}
else if(a>=70 && a<75)
{
    printf("marks is 1");
}
else
{
    printf("marks is 0");
}
  

}

