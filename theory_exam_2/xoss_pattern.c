#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);

        for (int j = 1; j <= n - 2; j++)
        {
            if (i == 1)
            {
                printf("%d", j + 1);
            }
            else if (i == n)
            {
                printf("%d", n);
            }
            else
            {
                printf(" ");
            }
        }

        printf("%d \n", n);
    }
}