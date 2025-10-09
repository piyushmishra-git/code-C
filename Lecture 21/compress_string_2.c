#include<stdio.h>
#include<string.h>
int main(){
    char str[]="aabbnnjakalc",cstr[100];
    int k=0;
    int freq[256]={0};
    int ln=strlen(str);
    for(int i=0;i<ln;i++){
       freq[str[i]]++; 
    }
    for(int i=0;i<256;i++){
        if(freq[i]>0){
            cstr[k] = i ;
            cstr[k+1] = freq[i] + '0';
            k+=2; 
        }
    }
    cstr[k-1]= '\0';
    printf("\n%s", cstr);
    
    
    return 0;
}