
#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, lg, sm;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    // finding the largest number
    if (n1 > n2 && n1 > n3 && n1 > n4)
        lg = n1;
    else if (n2 > n1 && n2 > n3 && n2 > n4)
        lg = n2;
    else if (n3 > n1 && n3 > n2 && n3 > n4)
        lg = n3;
    else
        lg = n4;
    // finding the smallest number
    if (n1 < n2 && n1 < n3 && n1 < n4)
        sm = n1;
    else if (n2 < n1 && n2 < n3 && n2 < n4)
        sm = n2;
    else if (n3 < n1 && n3 < n2 && n3 < n4)
        sm = n3;
    else
        sm = n4;

    printf("Largest = %d\nSmallest = %d", lg, sm);
}