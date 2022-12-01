#include <stdio.h>
int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}
float ratio(int num1, int num2)
{
    return factorial(num1) / factorial(num2);
}
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        printf("%f", ratio(num1, num2));
    }
    else
    {
        printf("%f", ratio(num2, num1));
    }
}