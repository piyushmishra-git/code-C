//modified 
#include <stdio.h>

int main()
{
    int arr[100];
    int n , p, q, r;
    int a, b, c;

    printf("Enter number of elemnets in array(1-50):");
    scanf("%d",&n);
    printf("Enter %d elements of array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int max = arr[0] + arr[0] + arr[0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] >= max)
                {
                    max = arr[i] + arr[j] + arr[k];
                    p = i;
                    q = j, r = k;
                    a = arr[i];
                    b = arr[j];
                    c = arr[k];
                }
            }
        }
    }
    printf("Max Pair at positions: %d, %d, %d \nSub array is: {%d, %d, %d}= %d", p, q, r, a, b, c, max);
    return 0;
}