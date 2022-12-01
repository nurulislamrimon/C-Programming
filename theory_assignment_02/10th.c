#include <stdio.h>
#include <string.h>
char get_grade(int mark)
{
    if (mark >= 80)
    {
        return 'A';
    }
    else if (79 >= mark && mark >= 60)
    {
        return 'B';
    }
    else if (59 >= mark && mark >= 40)
    {
        return 'C';
    }
    else
    {
        return 'F';
    }
}
int main()
{
    int mark;
    scanf("%d", &mark);
    printf("%c", get_grade(mark));
}