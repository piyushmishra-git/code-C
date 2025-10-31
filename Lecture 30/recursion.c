#include <stdio.h>

int Nto1(int a){
    if(a==0)
    {
       return 0; 
    }
    printf("%d ",a);
    Nto1(a-1);
    
}

int From1toN(int a){
    if(a==0)
    {
       return 0; 
    }
    From1toN(a-1);
    printf("%d ",a);
    
    
}




int main()
{
    Nto1(5);
    From1toN(5);
    
    return 0;
}