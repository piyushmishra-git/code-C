// Modified

#include <stdio.h>

int main()
{
    int a[3]= {1,2,3},b[3]={4,5,6},c[6],i;

    for(i=0;i<3;i++)
    {
        c[i]=a[i];
    }
    while(i<6){
        c[i]=b[i];
    }
    for(i=0;i<6;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}