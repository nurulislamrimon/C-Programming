#include <stdio.h>
int main()
{
    int num1, num2, temp, GCD;
    scanf("%d %d", &num1, &num2);

    while (num2 != 0)
    {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    GCD = num1;
    printf("GCD is %d", GCD);
}