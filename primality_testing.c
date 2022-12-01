#include <stdio.h>
int main()
{
    int num;
    int prime = 1;
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
        }
    }

    if (prime == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Composite");
    }
}