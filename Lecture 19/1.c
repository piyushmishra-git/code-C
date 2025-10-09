// Row swapping 
#include <stdio.h>

int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int temp;
    for (int i = 0; i < 3; i++)
    {
        temp = a[i][0];
        a[i][0] = a[i][2];
        a[i][2] =temp;

    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }  
        printf("\n"); 
    }
    
    return 0;
}