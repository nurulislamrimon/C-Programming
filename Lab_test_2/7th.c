#include <stdio.h>
#include <string.h>
int main()
{
    char first_word[100], second_word[100];

    fgets(first_word, sizeof(first_word), stdin);
    fgets(second_word, sizeof(second_word), stdin);
    int len = strlen(first_word) - 1;

    for (int i = 0; i < len; i++)
    {
        if (first_word[i] >= 'A' && first_word <= 'Z')
        {
            first_word[i] += 32;
        }
        if (second_word[i] >= 'A' && second_word <= 'Z')
        {
            second_word[i] += 32;
        }
    }
    for (int j = 0; j < len; j++)
    {
        if (first_word[j] < second_word[j])
        {
            puts(first_word);
            puts(second_word);
            break;
        }
        else
        {
            puts(second_word);
            puts(first_word);
            break;
        }
    }
}