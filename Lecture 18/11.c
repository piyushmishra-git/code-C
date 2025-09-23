

int k, n;

// max
#include <stdio.h>
#include <limits.h>
int main()
{
    int a[2][2] = {{1, 2}, {4, 5}};
    int b[2][2] = {{1, 7}, {4, 9}};
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if(a[i][j]==b[i][j])
            {
                printf("%d at post [%d][%d]\n",a[i][j],i,j);
            }
        }
    }

    return 0;
}
