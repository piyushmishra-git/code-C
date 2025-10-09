// SPIRAL
#include <stdio.h>

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int top = 0, bottom = 2, left = 0, right = 3;

    while (top <= bottom && left <= right)
    {
        // Print top row
        for (int i = left; i <= right; i++)
            printf("%d ", arr[top][i]);
        top++;

        // Print right column
        for (int i = top; i <= bottom; i++)
            printf("%d ", arr[i][right]);
        right--;

        // Print bottom row
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                printf("%d ", arr[bottom][i]);
            bottom--;
        }

        // Print left column
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                printf("%d ", arr[i][left]);
            left++;
        }
    }

    return 0;
}