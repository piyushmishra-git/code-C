#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "cabbabk";
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
        if(count==1)
        {
            printf("first Non repeating character is ---  %c  ---", str[i]);
            break;
        }
        }
    return 0;
}