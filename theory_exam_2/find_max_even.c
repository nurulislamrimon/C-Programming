#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, a[20], max1 = 0, max2 = 0, sum;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max1)
        {
            max1 = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max1 > a[i] && a[i] > max2)
        {
            if ((max1 % 2 == 0 && a[i] % 2 == 0) || (max1 % 2 != 0 && a[i] % 2 != 0))
            {
                max2 = a[i];
            }
        }
    }
    sum = max1 + max2;
    printf("%d", sum);
    return 0;
}