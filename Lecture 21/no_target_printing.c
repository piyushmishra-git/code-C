#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "hello";
    char target = 'e';
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]== 'e')
        {
            continue;
        }
        else{
            printf("%c",str[i]);
        }
    }

    return 0;
}