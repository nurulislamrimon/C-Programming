#include <stdio.h>
int main()
{
    int i;
    char a[10];
    char ch = 'a';
    for (i = 0; i < 8; i++)
    {
        a[i] = ch + 8 - i;
    }
    a[8] = '\0';

    for (int j = 0; j < 10; j++)
    {
        printf("%c", a[j]);
    }
}