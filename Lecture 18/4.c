#include <stdio.h>

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}},sum;
    for (int j = 0; j < 3; j++)
    {
        sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum+=arr[i][j];
        }
        printf("Sum of Coloumn %d = %d\n",j, sum); 
    }
    
    return 0;
}