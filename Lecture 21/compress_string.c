#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "cabbabk";
    char cstr[strlen(str)];

    int count = 0, k = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        count = 0;
        for (int j = 0; j < strlen(str); j++)

        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        printf("\n%d", count);
        cstr[k] = str[i];
        cstr[k + 1] = count +'0';
        k =k +2;
    }

    printf("\n%s", cstr);
    return 0;
}