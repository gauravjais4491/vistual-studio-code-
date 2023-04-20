//int main(){
//	int attendance,i;
//	printf("enter your attendance: ");
//	scanf("%d",&attendance);
//	for(i=1;i<=attendance;i++)
//	{
//		printf("value of i = %d\n",i);
//	}
//
//}

//int main(){
//    int n,i;
//    scanf("%d",&n);
//    int array[n];
//    for(i=0;i<n;i++)
//    {
//         scanf("%d",&array[i]);
//    }
//    for(i=n-1;i>=0;i--)
//    {
//
//        printf("%d\t",array[i]);
//
//    }
//}

//void update(int *a,int *b) {
//    printf("%d\n",*a +*b);
//    printf("%d",abs(*a-*b));
//}
//
//int main() {
//    int a, b;
//    int *pa = &a, *pb = &b;
//
//    scanf("%d %d", &a, &b);
//    update(pa, pb);
//
//}

// struct student{
// 	int id;
// 	char name[20];
// 	float percentage;
// };

//  main(){
// 	int n,i;
// 	struct student record[n];

// 	printf("enter the value of n: ");
// 	scanf("%d",&n);
// 	for(i=1;i<=n;i++)
// 	{
// 		printf("enter [%d] student id: ",i);
// 		scanf("%d",&record[i].id);
// 		printf("enter [%d] student name: ",i);
// 		scanf("%s",&record[i].name);
// 		printf("enter [%d] student percentage: ",i);
// 		scanf("%f",&record[i].percentage);
// 	}
// 	for(i=1;i<=n;i++)
// 	{
// 		printf("id = %d",record[i].id);
// 		printf("name=%s",record[i].name);
// 		printf("percentage=%f",record[i].percentage);
// 	}

// }

// int main(){
// 	int n;
// 	printf("Enter the number you want multiplication table of : ");
// 	scanf("%d",&n);
// 	printf("Table of %d : \n",n);
// 	for(int i=1;i<=10;i++)
// 	{
// 		printf("%d x %d : %d\n",n,i,n*i);
// 	}
//}

// int main()
// {
// 	int attendance;
// 	printf("enter your attendance: ");
// 	scanf("%d", &attendance);

// 	switch (attendance)
// 	{
// 	case 95:
// 	printf("you got 5 marks");
// 	break;

//     case 90:
// 	printf("you got 4 marks");
// 	break;

//     case 85:
// 	printf("you got 3 marks");
// 	break;

//     case 80:
// 	printf("you got 2 marks");
// 	break;

//     case 75:
// 	printf("you got 1 marks");
// 	break;

//     default:
// 	printf("you got 0 marks");
// 	break;
// 	}
// }

// int main(){
// 	int a=5;
// 	printf("%d %d %d",++a,a++,++a);
// }

// int main(){
// 	printf
// 	(
// 		"hello, world! "       /* We cann't break quote.kuch bhi break ka sakte h quote nahi*/
// 	);
// }

// int main(){
// 	int fahrenheit=0, celsius;
// 	while(300>=fahrenheit){
// 		celsius=(5*(fahrenheit-32)/9);
// 		printf("%d  %d\n",fahrenheit,celsius);
// 		fahrenheit=fahrenheit+20;
// 		printf("\a");
// 	}

// }

// int main()
// {
// 	int i;
// 	for (i = 1; i < 10; i++)
// 	{
// 		// delay(500);
// 		if (i == 2)
// 		{
// 			printf("%d\n",sizeof(i));
// 			break;
// 		}
// 		printf("%d\n",i);
// 	}
// }

// int main(){
// 	int attendance;
// 	scanf("%d",&attendance);
// 	switch (attendance)
// 	{
// 	case 90:
// 	    if (attendance>=90)
// 		{
// 			printf("you got extra 5 marks\n");
// 			// break;                            // if we don't use break then case sahi hone ke baad ka sara case execute hoga
// 		}
// 	case 85:
// 	    if (attendance>=85 && attendance<90)
// 		{
// 			printf("you got extra 4 marks\n");
// 			break;
// 		}
// 	case 80:
// 	    if (attendance>=80 && attendance<85)
// 		{
// 			printf("you got extra 3 marks\n");
// 			break;
// 		}
// 	case 75:
// 	    if (attendance>=75 && attendance<80)
// 		{
// 			printf("you got extra 2 marks\n");
// 			break;
// 		}
// 	default:
// 		printf("you got extra 1 marks\n");
// 	}
// }

// int main()
// {
// 	int attendance;
// 	scanf("%d", &attendance);
// 	switch (attendance)
// 	{
// 	case 90:

// 		printf("you got extra 5 marks\n");
// 	    break; // if we don't use break then case sahi hone ke baad ka sara case execute hoga

// 	case 85:

// 		printf("you got extra 4 marks\n");
// 		break;

// 	case 80:

// 		printf("you got extra 3 marks\n");
// 		break;

// 	case 75:

// 		printf("you got extra 2 marks\n");
// 		break;

// 	default:
// 		printf("you got extra 1 marks\n");
// 	}
// }

// int main(){
// 	int a=5;
// printf("%f",(float) a);  // type casting
// }
/*
int sum(int a=5,int b=6){
	return (a+b);
}

int main(){
	int c;
	c=sum();
	printf("%d",c);
	}
*/

/*
 //factorial using recursive function
int factorial(int n){
	if (n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
int main(){
	int n,c;
	printf("Enter any number");
	scanf("%d",&n);
	c=factorial(n);
	printf("The Factorial of %d is %d",n,c);
}
*/

/*
float convertion(int a)
{
	int n;
	if (a == 1)
	{
		printf("Enter the number that you want to convert into mile: ");
		scanf("%d", &n);
		printf("coversion of %d into mile is: %f", n, n * 0.621371);
	}
	if (a == 2)
	{
		printf("Enter the number that you want to convert into foot: ");
		scanf("%d", &n);
		printf("coversion of %d into mile is: %f", n, n * 0.0833333);
	}
	if (a == 3)
	{
		printf("Enter the number that you want to convert into inches : ");
		scanf("%d", &n);
		printf("coversion of %d into mile is: %f", n, n * 0.393701);
	}
	if (a == 4)
	{
		printf("Enter the number that you want to convert into kg : ");
		scanf("%d", &n);
		printf("coversion of %d into mile is: %f", n, n * 0.453592);
	}
	if (a == 5)
	{
		printf("Enter the number that you want to convert into metre : ");
		scanf("%d", &n);
		printf("coversion of %d into mile is: %f", n, n * 0.0254);
	}
}

int main()
{
	int a, n, c;
	printf("Enter :\n 1 for kms To mile\n 2 for inches To foot\n 3 for cms To inches\n 4 for pound To kgs\n 5 for inches To metre : \n");
	scanf("%d", &a);
	convertion(a);
}
*/

/*
int main(){
	int i, arr[4]={1,2,3,4};
	for(i=0;i<4;i++)
	{
	printf("%d\n",&arr[i]);
	}
}
*/

/*
int Fibonacci_series(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return (Fibonacci_series(n - 1) + Fibonacci_series(n - 2));
}

int main()
{
   int n, i = 0, c;
   printf("Enter a number: ");
 
   scanf("%d",&n);
 
   printf("Fibonacci series of %d is : ",n);
 
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d ", Fibonacci_series(i));
      i++; 
   }
 
   return 0;
}
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int Triangular_star_pattern(int n)
{
	if (n == 1)
	{
	int i,e;
	printf("enter no. of row in Triangular star pattern: ");
	scanf("%d", &e);
		for (i = 0; i < e; i++)
		{
			printf("*");
		}
	}
}
char Reversed_triangular_star_pattern(int n)
{
	int i;
	if (n == 2)
	{
		for (i = n; i < 0; i++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int n, c;
	printf("Enter a number:\n 1 for Triangular_star_pattern\n 2 for Reversed_triangular_star_pattern\n");
	scanf("d", &n);
	c = Triangular_star_pattern(n);
// 	for (c = 0; c < n; c++)
// 	{
// 		printf("Triangular_star_pattern is :\n", Triangular_star_pattern(c));
// 	}
printf("%d",c);
}
