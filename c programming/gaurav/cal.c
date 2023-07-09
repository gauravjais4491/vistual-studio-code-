#include<stdio.h> // include stdio.h library
 
main()
{       
    int a, b, result;
    char op;
    printf("Enter an number ");
    scanf("%d%c%d", &a, &op, &b);
 
    switch(op)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;              
    }
    
    printf("result = %d", result);
    
    return 0;
}
