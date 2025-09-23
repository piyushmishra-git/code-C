// min
#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}},min=INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }   
    }
    printf("Min = %d", min);
    
    return 0;
}