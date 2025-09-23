// convert 2D array to 1 array

#include <stdio.h>

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, a[9],k=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[k] = arr[i][j];
            k++;
        }  
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", a[i]);
    }
    
    
    return 0;
}