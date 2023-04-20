#include<stdio.h>
main()
{
	int a;
	 printf("enter the percentage");
	 scanf("%d",&a);
	 if(a>=90)
	 {
	 	printf("u get 5 marks");
	 }
	 else if(a>=85 && a<90)
	 {
	 	printf("u get 4 marks");
	 }
	 else if(a>=80 && a<85)
	 {
	 	printf("u get 3 marks");
     }
	 else if(a>=75 && a<80)
	 {
	 	printf("u get 2 marks");
	 }
	 else
	 {
	 	printf("u donot get marks");
	 }
}
