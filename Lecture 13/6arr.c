#include <stdio.h>

int main()
{
    int a[7]={10,20,10,10,50};
    int n=5,num=10,f=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==num){
            f++;
        }
    }
        printf("%d occurs %d times ",num,f);
    return 0;
}