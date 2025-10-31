#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
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

    printf("\nNew enter new size: ");
    int newSize;
    scanf("%d",&newSize);
    arr = (int *)realloc(arr, newSize * sizeof(int));

    if (newSize > n) {
        printf("Enter %d more elements:\n", newSize - n);
        for (int i = n; i < newSize; i++) {
            scanf("%d", &arr[i]);
        }
    } else {
        printf("Array resized to %d elements.\n", newSize);
    }
    n = newSize;

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}