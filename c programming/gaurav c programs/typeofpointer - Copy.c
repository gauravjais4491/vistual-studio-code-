/*
types of pointer
1)wild pointer
p=a nahi aiga program me
#include<stdio.h
main()
{
int i,a[5]={2,5,3,8,5};






2)null or void pointer
#include<stdio.h>
main()
{
void *ptr;
int a=5;
float b=6;
char c='b';
ptr=&a;
printf("%d\n",*((int*)ptr));
ptr=&b;
printf("%f\n",*((float*)ptr));
ptr=&c;
printf("%c\n",*((char*)ptr));
}
