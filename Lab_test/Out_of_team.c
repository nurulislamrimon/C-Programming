
#include <stdio.h>
int main()
{
    int array[100], n, k, count = 0;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] < k)
        {
            count++;
        }
    }

    printf("%d", count);
}