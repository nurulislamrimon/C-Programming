#include <stdio.h>
int main()
{
    int array[101], t, remaining, result;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d%%", &array[i]);
    }

    for (int j = 0; j < t; j++)
    {
        if (array[j] >= 80)
        {
            result = (100 - array[j]) * 3;
            printf("%d minutes\n", result);
        }
        else if (array[j] >= 60)
        {
            remaining = (100 - array[j]) - 20;
            result = remaining * 2 + 20 * 3;

            printf("%d minutes\n", result);
        }
        else
        {
            remaining = (100 - array[j]) - 40;
            result = remaining + (20 * 2) + (20 * 3);
            printf("%d minutes\n", result);
        }
    }
}