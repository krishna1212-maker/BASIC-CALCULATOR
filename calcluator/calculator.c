/*
Hey guys this is my first program i am writing
i hope you all will help me, support me and help me to get upgraded
thank you
*/

#include <stdio.h>
int main()
{
    char operator;
    int a, b;
    printf("Hello Welcome to my first self made calculator\n");
    printf("Enter two numbers A and B\n");
    scanf("%d %d" , & a, &b);
    printf("Select the operants\n");
    scanf(" %c" , & operator);
    if (operator == '+')
    {
        printf("The result is: %d" , a+b);
    }
    if (operator == '-')
    {
        printf("The result is: %d" ,  a-b);
    }
    if (operator == '*')
    {
        printf("The result is: %d" , a*b);
    }
    if (operator == '/')
    {
        printf("The result is: %d" , a/b);
    }
    return 0;
}