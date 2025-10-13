#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "abcbjfbebf";
    char result='\0';
    int freq[256] = {0};
    int ln = strlen(str),max=0;
    for (int i = 0; i < ln; i++)
    {
        freq[str[i]]++;
    }
    for(int i=0; i<ln;i++)
    {
        if(freq[str[i]]>max)
        {
            max = freq[str[i]];
            result = str[i];
        }
       
    }
    printf("%d = %c ", max, result);
    return 0;
}