#include <stdio.h>

int main()
{
    //Lower Left Triangle
    int n;
    printf("To print number of rows of Lower Left Triangle of  Numbers \nEnter Number of Rows:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");            
    }
    
    return 0;
}