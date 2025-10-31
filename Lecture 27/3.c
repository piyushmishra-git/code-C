#include <stdio.h>

int main()
{
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int minPrize=arr[0];
    int maxP=0;
    int profit;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<minPrize){
            minPrize=arr[i];
        }else{
            profit=arr[i]-minPrize;
            if(profit>maxP){
                maxP=profit;
            }
        }

    }
    if(maxP>0)
    {
        printf("Max Profit = %d ",maxP);
    }else{
        printf("No maxProfit, profit = %d ",maxP);
    }
    return 0;
}