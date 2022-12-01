#include <stdio.h>
#include <string.h>
int main()
{
    int n, count = 0, most = 0;
    char arr[100];

    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        scanf("%c", &arr[i]);
    }

    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
        else
        {
            if (most < count)
            {
                most = count;
            }
            count = 1;
        }
    }
    printf("%d", most);
}