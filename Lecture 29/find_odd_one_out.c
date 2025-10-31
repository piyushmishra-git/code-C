#include <stdio.h>

int main()
{
    int arr[5]={4,3,4,3,5};
    int xor=0;
    for(int i=0;i<5;i++){
        xor=xor^arr[i];  
    }
    printf("%d",xor);
    return 0;
}