// Modified

#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, -2, 1};
    int n = 5, sum, k = 3;
    int start = 0;
    int max = arr[0] + arr[1] + arr[2];

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum > max)
            {
                max = sum;
            }
        }
        
    }
    printf("%d", max);
    return 0;
}