#include <stdio.h>
int main()
{
    int n = 11, temp, m = 5;
    int a[20] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
}