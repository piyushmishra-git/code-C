#include<stdio.h>
int main()
{
    int n=10;
    for (int i=0;i<n;i++)
    {
        if(i%2==0)
        continue;
            printf("%d\n",i);
    }
    return 0;
}