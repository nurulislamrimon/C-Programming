#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int n;
    scanf("%s %d", &a, &n);

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] + n > 122)
        {
            a[i] = ((a[i] + n) - 122) + 96;
        }
        else
        {
            a[i] += n;
        }
    }
    printf("%s", a);
}