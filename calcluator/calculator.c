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
    scanf("%d %d", &a, &b);
    printf("Select the operator (+, -, *, /)\n");
    scanf(" %c", &operator);

    switch (operator)
    {
        case '+':
            printf("The result is: %d\n", a + b);
            break;

        case '-':
            printf("The result is: %d\n", a - b);
            break;

        case '*':
            printf("The result is: %d\n", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Error: Cannot divide by zero!\n");
            else
                printf("The result is: %d\n", a / b);
            break;

        default:
            printf("Error: Invalid operator '%c'\n", operator);
    }

    return 0;
}
