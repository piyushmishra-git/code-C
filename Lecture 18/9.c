
    
    int k,n;

// max
#include <stdio.h>
#include <limits.h>
int main()
{
    int a[2][2] = {{1,2},{4,5}};
    int b[2][2] = {{6,7},{8,9}};
    int max=INT_MIN;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }   
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if(b[i][j] > max)
            {
                max = b[i][j];
            }
        }   
    }
    printf("Max = %d", max);
    
    return 0;
}
    