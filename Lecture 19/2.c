// coloumn swapping
#include <stdio.h>

int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int temp;
    for (int j = 0; j < 3; j++)
    {
        temp = a[0][j];
        a[0][j] = a[2][j];
        a[2][j] =temp;

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