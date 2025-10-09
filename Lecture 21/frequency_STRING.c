#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "aabc";
    int count = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        count = 0;
        for (int j = 0; j < strlen(str); j++)
        
            {
                if (str[i]== str[j])
                {
                    count ++;
                }
            }
        printf("count of %c = %d\n", str[i],count);
        }
    return 0;
}