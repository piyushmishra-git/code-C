#include <stdio.h>

int sum(int a){
    if(a!=0)
    {
        return a+sum(a-1) ;
    }
    
}



int main()
{
    printf("%d",sum(5));
    
    return 0;
}