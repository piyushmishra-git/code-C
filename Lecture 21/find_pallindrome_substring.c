#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "cdbababcdad", newstr[20];
    int j = 0, yes = 0, i, f = 1, l, m=0,k = 0;
    for (i = 0; i < strlen(str) / 2; i++)
    {
        l = i;
        m=l;
        f = 1;
        for (j = 0; j <= m / 2; j++)
        {
            if (str[i] != str[l])
            {
                f = 0;
            }
            m--;
            if(f==0)
            {
                break;
            }
        }
        if(f==0)
        {
            break;
        }
    }
    printf("%d\n",l);
    for (k = 0; k <= l*2; k++)
    {
        newstr[k] = str[k];
    }
    
    newstr[k] = '\0';

    printf("%s", newstr);

    return 0;
}