
#include<stdio.h>
int main()
{
    float radious;
    printf("Enter the radious of circle ");
    scanf("%f",&radious);

    //calculation
    float area;
    area = 3.14159*radious*radious;
    printf("The area of circle is %f ",area);
    return 0;
}
