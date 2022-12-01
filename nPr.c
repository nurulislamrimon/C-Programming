#include <stdio.h>
#include <math.h>

int fact(int n);
int main()
{
    int n = 5, r = 2;
    printf("nPr = %d", fact(n) / fact(n - r));
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