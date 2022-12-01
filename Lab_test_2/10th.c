#include <stdio.h>
int main()
{
    int num, sum = 0;
    scanf("%d", &num);
    for (num; num > 0; num /= 10)
    {
        sum += num % 10;
    }
    printf("%d", sum);
}