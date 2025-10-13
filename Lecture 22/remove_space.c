#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="C programming";
    char newStr[20];
    int k=0;

    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]!=' ')
        {
            newStr[k] = str[i];
            k++;
        }
    }
    newStr[k] = '\0';
    printf("%s",newStr);

    return 0;
}