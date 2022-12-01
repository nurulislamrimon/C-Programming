#include <stdio.h>
int main()
{
    int rolls[20], n, k;
    scanf("%d", &n);

    for (int students_rolls = 0; students_rolls < n; students_rolls++)
    {
        scanf("%d", &rolls[students_rolls]);
    }

    scanf("%d", &k);

    if (k > 0)
    {
        for (int student_left_side = k; student_left_side < n; student_left_side++)
        {
            printf("%d ", rolls[student_left_side]);
        }
        for (int girls = 0; girls < k; girls++)
        {
            printf("%d ", rolls[girls]);
        }
    }
    else
    {
        for (int only_left_side = 0; only_left_side < n; only_left_side++)
        {
            printf("%d ", rolls[only_left_side]);
        }
    }
}