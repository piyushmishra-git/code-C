#include <stdio.h>

int main()
{
    //Lower Left Triangle
    int n;
    printf("To print number of rows of Lower Left Triangle \nEnter Number of Rows:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            
            // if(i==1 || i==n)
            // {
            //     printf("* ");
            // }
            // else{
            //     if(j==1 || j==n)
            //     {
            //         printf("* ");
            //     }
            //     else{
            //         printf("  ");
            //     }
            // }


            // OR
            if(i==1 || i==n || j==1 || j==n)
            {
                    printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");            
    }
    
    return 0;
}