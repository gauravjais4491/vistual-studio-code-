#include<stdio.h>
main()
{
   int a[5]={2,6,4,9,3};
    int i,*p;
    p=a;

   for(i= 0; i< 5;i++)
   {
     printf("adress is %p\n",p);
     printf("value is %d\n",*p);
     p++;
   }
		  
 
}
