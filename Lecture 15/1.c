#include <stdio.h>
#include <limits.h>

int maxArraySum(int arr[], int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum > maxSum)
            maxSum = currSum;
        if (currSum < 0)
            currSum = 0;
    }
    return maxSum;
}
int main()
{
    int arr[5] = {1, 4, -3, 4, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int data = maxArraySum(arr, n);
    printf("%d", data);
    return 0;
}