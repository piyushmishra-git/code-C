#include <stdio.h>

int power(int p,int q){
    if(q==0){
        return 1;
    }

    return p*power(p,q-1);
}

int main()
{
    printf("%d",power(3,4));
    return 0;
}