#include <stdio.h>

int main()
{
    int a[7]={10,20,30,40,50};
    int n=5,first=a[0];
    for(int i=0;i<n;i++)
    {
        a[i]=a[i+1];
        if(i==n-1){
            a[i]=first;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}