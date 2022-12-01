#include <stdio.h>
#include <math.h>

int fact(int n);
int main()
{
    int n = 16, r = 3;
    printf("nCr = %d", fact(n) / (fact(r) * fact(n - r)));
}

int fact(int n)
{
    int mult = 1;
    for (int i = 1; i <= n; i++)
    {
        mult *= i;
    }
    return mult;
}