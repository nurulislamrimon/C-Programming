#include <stdio.h>
#include <string.h>
int main()
{
    int t, n, count;
    char s[1000];
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        count = 0;
        scanf("%d", &n);
        scanf("%s", &s);

        for (int j = 0; j < n; j++)
        {
            if ((s[j] == '0' && s[j - 1] == '1') || (s[j] == '1' && s[j - 1] == '0'))
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}