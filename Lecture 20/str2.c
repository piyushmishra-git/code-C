#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="hii",newstr[10];
    int i;
    printf("%d\n",strlen(str));
    for ( i = 0; str[i] != '\0' ; i++)
    {
        printf("%c\n",str[i]);
        newstr[i] = str[i];
    }
    newstr[i] = '\0';
    printf("%s",newstr);
    
    return 0;
}