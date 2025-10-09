#include<stdio.h>
int main()
{
    int num,count=0,product=1,lastdigit;
    printf("Enter a Number: ");
    scanf("%d",&num);

    if(num==0)
    {
    count=1;
    }
    while (num>0)
    {
        lastdigit=num%10;
        product=product*lastdigit;
        num=num/10;
       
       
    }
    printf("The product of the Number is %d",product);
    
    return 0;
}