#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int inp;
    scanf("%d", &inp);
    if (inp % 3 == 0)
    {
        printf("%d", inp / 3);
    }
    else
    {
        printf("-1");
    }

    return 0;
}