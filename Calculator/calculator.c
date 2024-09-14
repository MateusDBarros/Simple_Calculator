#include <stdio.h>

int main(void)
{
    double n1;
    double n2;
    char op;
    double result;


    printf("Select your operator(+ - * /): ");
    scanf("%c", &op);

    printf("Choose first number: ");
    scanf("%lf", &n1);

    
    printf("Choose second number: ");
    scanf("%lf", &n2);

    
    switch (op)
    {
    case '+':
        result = n1 + n2;
        printf("The result of %.2lf %c %.2lf is: %.2lf \n", n1, op, n2, result);
        break;
    case '-':
        result = n1 - n2;
        printf("The result of %.2f %c %.2f is: %.2f \n", n1, op, n2, result);
        break;
    case '*':
        result = n1 * n2;
        printf("The result of %.2f %c %.2f is: %.2f \n", n1, op, n2, result);
        break;
    case '/':
        result = n1 / n2;
        printf("The result of %.2f %c %.2f is: %.2f \n", n1, op, n2, result);
        break;

    default:
        printf("Not a valid! operator");
    }

    return 0;
}
