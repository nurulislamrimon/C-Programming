
#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if (num1 % num2 == 0)
    {
        printf("The first number is divisible by the second number.");
    }
    else if (num2 % num1 == 0)
    {
        printf("The second number is divisible by the first number.");
    }
    else
    {
        printf("None of them are divisible by the other.");
    }
}