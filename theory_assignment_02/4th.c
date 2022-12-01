#include <stdio.h>
#include <string.h>
int main()
{
    int num1, num2, myArray1[100], position = 1;
    scanf("%d %d", &num1, &num2);

    for (int i = 1, j = 1; i <= num1, j <= num1; i++, j++)
    {
        if (i % 2 == 0)
        {
            myArray1[i / 2] = i;
        }
        else
        {
            myArray1[(num1 / 2) + position] = i;
            position++;
        }
    }

    printf("The %dth position in this sequence is %d", num2, myArray1[num2]);
}