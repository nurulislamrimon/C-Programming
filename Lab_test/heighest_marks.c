#include <stdio.h>
int main()
{
    int array[100], n, heighest;

    scanf("%d", &n);

    heighest = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);

        if (heighest < array[i])
        {
            heighest = array[i];
        }
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d ", heighest - array[j]);
    }
}