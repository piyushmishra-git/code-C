// Modified

#include <stdio.h>
#include <limits.h>

int maxArraySum(int arr[],int n,int k)
{
    int maxSum = INT_MIN;
    int windowSum =0;

    // Calculate sum of first window
    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    maxSum = windowSum;

    // Slide the window
    for (int i = k; i < n; i++)
    {
        windowSum = windowSum - arr[i - k] + arr[i];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }
    return maxSum;
}

int main()
{
    int arr[7] = {-1, 2, 4, 5, -4, 3, -7};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int data = maxArraySum(arr, n, k);
    printf("%d", data);
}