#include <stdio.h>
#include <string.h>
void change_case(char a[100])
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 90)
        {
            a[i] -= 32;
        }
        else
        {
            a[i] += 32;
        }
    }
    printf("%s", a);
}

int main()
{
    char a[100];
    scanf("%s", &a);
    change_case(a);
}