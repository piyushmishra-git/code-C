// Modified

#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, -2, 1};
    int n = 5, sum, k = 3;
    int start = 0;
    int max = arr[0] + arr[1] + arr[2];

    for (int i = 0; i <= n - k; i++)
    {
        sum = 0;
        for (int j = i; j < k + i; j++)
        {
            sum = sum + arr[j];
        }
        if (sum > max)
        {
            max = sum;
            start = i;
        }
    }
    printf("Max Pair at positions: %d, %d, %d \nSub array is: {%d, %d, %d}= %d", start, start + 1, start + 2, arr[start], arr[start + 1], arr[start + 2], max);
    return 0;
}