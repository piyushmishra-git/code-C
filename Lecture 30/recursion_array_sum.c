#include <stdio.h>

int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    return arr[n-1]+sum(arr,n-1);
    
}



int main()
{
    int arr[3]={3,5,6};
    int n=3;

    printf("%d",sum(arr,n));
    
    return 0;
}