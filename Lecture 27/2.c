#include <stdio.h>

int main()
{
    int a[]={7,1,5,3,6,4};
    int n=sizeof(a)/sizeof(a[0]);
    int maxProfit=0;
    int d1=-1,d2=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[j]-a[i])>maxProfit)
            {
                maxProfit=a[j]-a[i];
                d1=i+1;
                d2=j+1;
            }
        }
    }
    if(maxProfit>0)
    {
        printf("Max profit = %d at d1 = %d to d2 = %d",maxProfit,d1,d2);
    }else{
        printf("No maxProfit profit");
    }
    return 0;
}