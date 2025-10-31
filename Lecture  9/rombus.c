#include <stdio.h>

int main()
{
    //Lower Left Triangle
    int n;
    printf("To print number of rows of rombus \nEnter Number of Rows:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j <n; j++)
        {
            printf("* ");
        }
        printf("\n");            
    }
    
    return 0;
}