#include<stdio.h>
int main(){

    char a = '3';
    char* ptra = &a;
    printf("%d\n", ptra);
    ptra--;
    printf("%d\n", ptra);
    printf("%d\n", ptra-2);
    printf("%d\n", ptra+2);

    printf("\n");

    int b=3;
    int *ptra2=&b;
    printf("%d\n",ptra2);
    ptra2++;
    printf("%d\n", ptra2);
    printf("%d\n", ptra2-2);
    printf("%d\n", ptra2+2);

    printf("\n");

	int *p;
	int c=5;
	p=&c;
	printf("%d\n",*p);
	printf("%d\n",&(*p));
	printf("%d\n",&c);
	printf("%d",&p);
}

 