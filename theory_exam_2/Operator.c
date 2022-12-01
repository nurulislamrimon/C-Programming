#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[20];
    long long int a, b, sum = 0;
    fgets(s, sizeof(s), stdin);

    scanf("%lld %lld", &a, &b);

    for (int i = 0; i < strlen(s) - 1; i++)
    {
        if (s[i] == '+')
        {
            sum += a + b;
        }
        else
        {
            sum += a * b;
        }
    }
    printf("%lld", sum);

    return 0;
}