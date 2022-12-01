#include <stdio.h>
#include <string.h>

int find(char num1[100], char num2);

int main()
{
    char a[100];
    scanf("%s", &a);

    if (find(a, '1') && find(a, '9') && find(a, '7'))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}

int find(char num1[100], char num2)
{
    for (int i = 0; i < strlen(num1); i++)
    {
        if (num1[i] == num2)
        {
            return 1;
        }
    }
    return 0;
}
