#include <stdio.h>
int main()
{
    int row = 3, col = 3, tempSum, isMagicSquare = 0, sum;
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // row checking
    for (int k = 0; k < row; k++)
    {
        tempSum = 0;
        for (int l = 0; l < col; l++)
        {
            tempSum += a[k][l];
        }
        if (k == 0)
        {
            sum = tempSum;
        }
        else
        {
            if (sum != tempSum)
            {
                isMagicSquare++;
            }
        }
    }
    // column checking
    for (int k = 0; k < row; k++)
    {
        tempSum = 0;
        for (int l = 0; l < col; l++)
        {
            tempSum += a[l][k];
        }
        if (sum != tempSum)
        {
            isMagicSquare++;
        }
    }
    // primary diagonal
    tempSum = 0;
    for (int k = 0; k < row; k++)
    {
        for (int l = 0; l < col; l++)
        {
            if (k == l)
            {
                tempSum += a[k][l];
            }
        }
    }
    if (sum != tempSum)
    {
        isMagicSquare++;
    }

    // secondary diagonal
    tempSum = 0;
    for (int k = 0; k < row; k++)
    {
        for (int l = 0; l < col; l++)
        {
            if ((k + l) == 2)
            {
                tempSum += a[k][l];
            }
        }
    }
    if (sum != tempSum)
    {
        isMagicSquare++;
    }
    if (isMagicSquare > 0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
}