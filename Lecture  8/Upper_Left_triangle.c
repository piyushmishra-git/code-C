#include <stdio.h>

int main()
{
    //Lower Left Triangle
    int n;
    printf("To print number of rows of Upper Left Triangle \nEnter Number of Rows:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j >i; j--)
        {
            printf("*");
        }
        printf("\n");            
    }
    
    return 0;
}