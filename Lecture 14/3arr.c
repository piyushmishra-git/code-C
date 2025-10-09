#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, -2, 1};
    int n = 5, sum, k = 3;
    int p=1, q=1, r=2;
    int a=arr[0], b=arr[1], c=arr[2];
    int max = arr[0] + arr[1] + arr[2];

    for (int i = 0; i <= n - k; i++)
    {
        sum = 0;
        for (int j = i; j < k+i; j++)
        {
            sum = sum + arr[j];
        }
        if (sum > max)
        {
            max = sum;
            p = i;
            q = i+1;
            r = i+2;
            a = arr[i];
            b = arr[i+1];
            c = arr[i+2];
        }
    }
    printf("Max Pair at positions: %d, %d, %d \nSub array is: {%d, %d, %d}= %d", p, q, r, a, b, c, max);
    return 0;
}