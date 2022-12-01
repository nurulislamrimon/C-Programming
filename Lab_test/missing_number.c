#include <stdio.h>
int main()
{

    int array[4], sum, i, k, j, t;

    scanf("%d", &t);

    for (i = 0; i < 4; i++)
    {
        scanf("%d", &array[i]);
    }

    for (k = 0; k < t; k++)
    {
        sum = 0;

        for (j = 1; j < 4; j++)
        {
            sum += array[j];
        }
        printf("%d\n", array[0] - sum);
    }
}