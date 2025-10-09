#include <stdio.h>

int main()
{
    int arr[7]={1,3,4,6,-5,5,1};
    int n=7,p,q,max=arr[0]+arr[0];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]+arr[j]>=max)
            {
                max=arr[i]+arr[j];
                p=i;q=i;
            }
        }
    }
    printf("Max Pair:at %d %d = %d",p,q,max);
    return 0;
}