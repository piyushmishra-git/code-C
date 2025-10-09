#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="hii";
    printf("%d",strlen(str));
    for (int i = strlen(str); i >=0 ; i--)
    {
        printf("%c\n",str[i]);
    }
    
    return 0;
}