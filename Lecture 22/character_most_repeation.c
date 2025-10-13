#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "abcbjfbebf";
    int count[20]={0};

    for (int i = 0; i < strlen(str); i++)
    {
        count[i] = 0;
        for (int j = 0; j < strlen(str); j++)
        
            {
                if (str[i]== str[j])
                {
                    count[i] ++;
                }
            }
        // printf("count of %c = %d\n", str[i],count[i]);
    }
    int max=count[0];

    for(int j=1;j<strlen(str); j++)
    {
        if(count[j]>max)
        {
            max=count[j];

        }
    }
    printf("%d",max);
    for(int k=0; k<strlen(str); k++)
    {
        if(count[k]==max)
        {
            printf("%c",str[k]);
            break;
        }
    }
    
    return 0;
}