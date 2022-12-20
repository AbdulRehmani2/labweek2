#include <stdio.h>

int main() {
    float num1, num2;
    char op = 'x';
    printf("Enter your first number : ");
    scanf("%f", &num1);
    printf("Enter your second number : ");
    scanf("%f", &num2);
    printf("Enter your operator (+,-,*,/) : ");
    scanf(" %c", &op);
    if (op == '+')
    {
        printf("%f \n", num1 + num2);
    } else if (op == '-')
    {
        printf("%f \n", num1 - num2);
    } else if (op == '*')
    {
        printf("%f \n", num1 * num2);
    } else if (op == '/')
    {
        printf("%f \n", num1 / num2);
    }
    getchar();
return 0;
}