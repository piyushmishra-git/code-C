#include <stdio.h>

int pallindrome(int arr[],int i,int j){
    if(i>=j){
        return 1;
    }
    if(arr[i]!=arr[j]){
        return 0;
    }
    return pallindrome(arr,++i,--j);
    
}
int main()
{
    int arr[]={1,2,3,2,1};
    int startindex=0;
    int endindex=4;
    if(pallindrome(arr,startindex,endindex)==1){
        printf("Pallindrome");
    }else{
        printf("Not pallindrome");
    }

    return 0;
}

   