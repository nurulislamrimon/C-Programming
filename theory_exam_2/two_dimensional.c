#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    int arr[100][100];

    scanf("%d %d", &n, &m);
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {

            scanf("%d", &arr[row][col]);
        }
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (arr[row][col] == row + 1 && arr[row][col] == col + 1)
            {
                arr[row][col] += 3;
            }
            else if (arr[row][col] == row + 1)
            {
                arr[row][col] += 2;
            }
            else if (arr[row][col] == col + 1)
            {
                arr[row][col] += 1;
            }

            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }

    return 0;
}