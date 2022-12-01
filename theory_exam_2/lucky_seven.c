#include <stdio.h>
#include <string.h>
int main()
{
    int t, not ;
    char s[20];
    scanf("%d ", &t);

    for (int i = 0; i < t; i++)
    {
        scanf(" %s", s);
        not = 0;

        for (int j = (strlen(s) - 1), k = 0; j == 0, k < strlen(s); j--, k++)
        {

            if (s[k] != s[j])
            {
                not ++;
            }
        }

        if (!not &&strlen(s) < 7)
        {
            printf("%s\n", s);
        }
        else if (!not &&strlen(s) > 7)
        {
            printf("%c%d%c\n", s[0], (strlen(s) - 2), s[strlen(s) - 1]);
        }
        else
        {
            printf("Not Palindrome\n");
        }
    }
}
