#include<stdio.h>
#include<string.h>
int main(){
    char str[]="aabcnnjakalc";
    int freq[256]={0};
    int flag=0;
    int ln=strlen(str);
    for(int i=1;i<ln-1;i++){
       if(str[i-1]=='a' && str[i] == 'b' && str[i+1] == 'c')
       {
            flag = 1;
       }
    }
    if(flag==0)
    {
        printf("NO");
    }else{
        printf("Yes");
    }
    
    
    return 0;
}