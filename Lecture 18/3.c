// max
#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}},max=INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }   
    }
    printf("Max = %d", max);
    
    return 0;
}