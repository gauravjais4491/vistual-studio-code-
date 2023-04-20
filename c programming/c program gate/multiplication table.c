#include<stdio.h>
int table(int n,int i)
{

    for(i=1;i<=10;i++)
    {
        return (n*i);
    }
    return 0;
}

void main(){
    int n,i;
    printf("Enter the number : ");
    scanf("%d",n);
    printf("%d",(n*i));
}