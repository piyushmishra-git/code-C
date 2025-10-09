#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "madam";
    int i, f = 1, l = strlen(str);
    printf("%d\n", strlen(str));
    for (i = 0; i < strlen(str) / 2; i++)
    {
        if (str[i] != str[l-1])
            f = 0;
        l--;
    }
    if (f)
        printf("Pallindrome");
    else
        printf("not pallindrome");
    return 0;
}