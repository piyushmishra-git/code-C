#include <stdio.h>

int main()
{
    //Lower Left Triangle
    int n;
    printf("To print number of rows of star pyramid \nEnter Number of Rows:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k <n-i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");            
    }
    
    return 0;
}