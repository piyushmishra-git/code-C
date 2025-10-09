#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a Number :");
    scanf("%d",&num);

    if(num==0)
    {
        count=1;
    }
    
    while(num>0)
        {
            count++;
            num=num/10;
        }
        printf("The Numbers of digits is %d ",count);
    return 0;
}