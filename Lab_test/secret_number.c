#include <stdio.h>
int main()
{
    int array[100], t, divisor;

    scanf("%d", &t);

    for (int test_case = 0; test_case < t; test_case++)
    {
        scanf("%d", &array[test_case]);
    }

    for (int i = 0; i < t; i++)
    {
        divisor = 0;
        if (array[i] == 1)
        {
            printf("No\n");
        }
        else
        {

            for (int j = 2; j < array[i]; j++)
            {
                if (array[i] == 1 || array[i] % j == 0)
                {
                    divisor++;
                }
            }
            if (divisor)
            {
                printf("No\n");
            }
            else
            {
                printf("Yes\n");
            }
        }
    }
}