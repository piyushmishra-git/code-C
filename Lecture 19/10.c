// spiral

#include <stdio.h>

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int top = 0, bottom = 2, left = 0, right = 3;

    for (int i = left; i <= right; i++)
    {
        printf("%d ", arr[top][i]);
    }
    top++;
    printf("\n");
    for (int i = top; i <= bottom; i++)
    {
        printf("%d ", arr[i][right]);
    }
    right--;
    for (int i = right; i >= left; i--)
    {
        printf("%d ", arr[bottom][i]);
    }
    bottom--;
    for (int i = bottom; i >= top; i--)
    {
        printf("%d ", arr[i][left]);
    }
    left--;

    return 0;
}