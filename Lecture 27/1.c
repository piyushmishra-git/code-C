#include <stdio.h>

int main()
{
    int a[]={4,0,3,5,0};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];
    int j=0,count=0;
    for(int i; i<n;i++)
    {
        if(a[i]==0)
        {
            count++;
            
        }else{
            b[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<count;i++)
    {
        b[j]=0;
        j++;
    }
    for(int i=0;i<n;i++)
    {
        //a[i]=b[i];
        printf("%d ", b[i]);
    }
    return 0;
}