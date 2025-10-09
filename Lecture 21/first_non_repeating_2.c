#include<stdio.h>
#include<string.h>
int main(){
    char str[]="aabbnnjakalc";
    int freq[256]={0};
    int ln=strlen(str);
    for(int i=0;i<ln;i++){
       freq[str[i]]++; 
    }
    
    for(int i=0;i<ln;i++){
        if(freq[str[i]]==1){
            printf("First non repeating is %c\n",str[i]);
            break;
        }
    }
    
    
    return 0;
}