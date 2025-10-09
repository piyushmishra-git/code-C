#include<stdio.h>
int main()
{
    int n;
    int t1=0;
    int t2=1;
    int next;
    printf("Enter a Number :");
    scanf("%d",&n);

    for (int i=0;i<n;i++)
    {
        printf("\n%d\n",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
       
    }
    return 0;
}
