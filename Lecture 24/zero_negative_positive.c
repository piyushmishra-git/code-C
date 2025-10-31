#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={-1,0,5,-2,0,3};

    int *arr = ( int *)malloc( n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}