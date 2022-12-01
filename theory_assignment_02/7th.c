#include <stdio.h>
int main()
{
    int a[100], n, temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    if (n % 2 != 0)
    {
        printf("Median is %d", a[n / 2]);
    }
    else
    {
        printf("Median is %d", (a[n / 2] + a[n / 2 - 1]) / 2);
    }
}