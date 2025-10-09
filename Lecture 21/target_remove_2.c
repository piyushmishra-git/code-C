#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "hello",newstr[20];
    char target = 'e';
    int j=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i] != target)
        {
            newstr[j] = str[i];
            j++;
        }
    }
    newstr[j] = '\0';
    strcpy(str, newstr);
    printf("%s", str);

    return 0;
}