
#include <stdio.h>
int main()
{
    int num, sum;
    scanf("%d", &num);

    for (num; num != 0; num /= 10)
    {
        sum += num % 10;
        printf("num %d", num);
    }
    printf("sum %d", sum);
}