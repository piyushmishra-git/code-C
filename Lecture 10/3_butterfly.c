#include <stdio.h>

int main()
{
    //Lower Left Triangle
    int n;
    printf("To print number of rows of Lower Left Triangle \nEnter Number of Rows:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            printf("*");
        }
        for (int k = 1; k <2*(n-i)-1; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");            
    }

    for (int i = 0; i < n; i++)
    {
        
        for (int k = 0; k < n - i ; k++)
        {
            printf("*");
        }
        
        for (int j = 1; j < 2 * i + 1; j++)
        {
            printf(" ");
        }
        for (int j = n; j >i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}