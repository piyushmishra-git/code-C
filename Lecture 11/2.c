#include <stdio.h>

void prime(int v)
{
    int c=0;
    if(v==1)
    {
        printf("Not Prime");
    }else{
        for(int i=2;i<v/2;i++)

        {
            if(v%i==0)
            {
                c++;
            }    
        }
        if(c==0){
            printf("Is Prime");
        }else{
            printf("Not Prime");
        }
    }
}

int main()
{
    int n;
    printf("Enter number to check:");
    scanf("%d",&n);
    prim e(n);
    return 0;
    
}
