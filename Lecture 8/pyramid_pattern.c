#include <stdio.h>

int main()
{
    //Lower Left Triangle
    int n;
    printf("To print number of rows of Lower Left Triangle \nEnter Number of Rows:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int k = 1; k <=n-i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");            
    }
    
    return 0;
}