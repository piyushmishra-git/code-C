#include <stdio.h>

int main()
{
    int a[7]={1,3,4,6,4,3,1};
    int n=7,f=0,j=n-1;
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[j])
        {
           f++;
        }
        j--;
    }
    if(k)
    {
        printf("Not pallindrome");
    }
    else{
        printf("pallindrome");
    }
    return 0;
}