#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "abcbjfbebf";
    int freq[256] = {0};
    int ln = strlen(str);
    for (int i = 0; i < ln; i++)
    {
        freq[str[i]]++;
    }
    int max = freq[0];
    for (int i = 1; i < 256; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
        }
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] == max)
        {
            printf("%d = %c ", max, i);
        }
    }

    return 0;
}