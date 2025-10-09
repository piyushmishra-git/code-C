#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "A man, a plan, a canal: Panama", str[100];

    int i, lstr, a = 0, f = 1;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            str[a] = s[i] + 32;
            a++;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            str[a] = s[i];
            a++;
        }
    }
    str[a] = '\0';
    printf("%s", str);
    for (i = 0; i < a / 2; i++)
    {
        if (str[i] != str[a - 1 - i])
            f = 0;
    }
    if (f)
        printf("\ntrue");
    else
        printf("\nfalse");

    return 0;
}