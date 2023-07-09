#include <stdio.h>
int main()
{
//main function definition
int a = 5, b = 10;
int sum;
printf("The value of a and b : %d %d ", a, b);
sum = add(a, b);    //function call
printf("\nsum = %d ", sum);
}
//function definition
int add(int a, int b)
{
int c;
c = a + b;
return c;    //returns a integer value to the calling function
}
