// with prebuild function
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="aabcnnjakalc";
    int freq[256]={0};
    int flag=0;
    int ln=strlen(str);
    char subStr[] = "abc";
    if(strstr(str,subStr)!= NULL)
    {
        printf("true");

    }else{
        printf("false");
    }
    return 0;
}