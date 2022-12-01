
#include <stdio.h>
int main()
{
    long long int num;
    int digits = 0;
    scanf("%lld", &num);

    for (num; num != 0; num /= 10)
    {
        digits++;
    }
    printf("%d digits", digits);
}