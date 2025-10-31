#include <stdio.h>

int main()
{
    
    int n=4;
    // 4*1 in binary = 100 * 001 = 00'0' the last zero decides yes or no

    if(n&1){
        printf("odd");
    }else{
        printf("even");
    }
    return 0;
}