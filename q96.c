//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, start = 0, end;

    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            end = i - 1;

            while (start <= end)
            {
                printf("%c", str[end]);
                end--;
            }

            if (str[i] == ' ')
                printf(" ");

            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    return 0;
}
