#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="cadbac";
    char str1[strlen(str)-1];
    int i,j;
    for(i=0;i<strlen(str);i++)
    {
        int k=0;
        for(j=0;j<strlen(str);j++)
        {
            if(j!=i)
            {
                str1[k] = str[j];
                k++;
            } 
        } 
          int m, f = 1, l = strlen(str1);
            for (m = 0; m < (strlen(str1) / 2); m++)
                {
                    if (str1[m] != str1[l-1])
                        f = 0;
                    l--;
                }
            if(f)
            {
                for(int h=0;h<strlen(str1);h++)
                {
                    printf("%c",str1[h]);
                }
                //printf("%s is pallindrome\n", str1) ;
                break;
            }
    }
    return 0;
}


                