#include <stdio.h>

int main()
{
    int a[2][2] = {{1, 2}, {4, 5}};
    int b[2][2] = {{1, 7}, {4, 2}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                for (int l = 0; l < 2; l++)
                {
                    if (a[i][j] == b[k][l])
                    {
                        printf("%d is common at a[%d][%d] and b[%d][%d]\n", a[i][j], i, j, k, l);
                    }
                }
            }
        }
    }

    return 0;
}