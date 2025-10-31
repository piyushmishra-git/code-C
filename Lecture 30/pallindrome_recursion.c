#include <stdio.h>
#include <string.h>
void pallindrome(char str[]){
    int i=0,f=1;
    int l=strlen(string);
    if(str[i]== str[l-1])
    {
        i++;
        l--;
        pallindrome();
    }else(
        f=0;
    )
    if (f)
        printf("Pallindrome");
    else
        printf("not pallindrome");
}
int main()
{
    char str = "madam";
    pallindrome(str);
    return 0;
}

   