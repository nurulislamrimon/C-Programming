#include <stdio.h>
int main()
{
    int array[15];
    for (int i = 0; i < 15; i++)
    {
        if (i == 0)
        {

            array[0] = 1;
            printf("%d\n", array[0]);
        }
        else
        {
            array[i] = array[i - 1] * 2;
            printf("%d\n", array[i]);
        }
    }
}