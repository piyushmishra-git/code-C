#include <stdio.h>

int main()
{
    int arr[4][4] = {{21, 22, 23, 24}, {25, 26, 27, 28}, {29, 10, 11, 12},{13,14,15,16}};
    int top = 0, bottom = 3, left = 0, right = 3;
    printf("\n");
    for (int i = left; i < right+1; i++)
    {
        for (int j = top; j < bottom+1; j++)
        {
            if(i==top || i==bottom)
            {
                printf("%d ", arr[i][j]);
            }
            else if(j==right-i)
            {
                printf("%d ", arr[i][j]);
            }
            else{
                printf("   ");
            }
        }  
        printf("\n"); 
    }
    printf("\n");
    return 0;
}