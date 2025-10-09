#include <stdio.h>

    int main()
    {
        int start, end, i, j, count;

        printf("Enter start of range: ");
        scanf("%d", &start);
        printf("Enter end of range: ");
        scanf("%d", &end);

        printf("Prime numbers between %d and %d are:\n", start, end);

        for (i = start; i <= end; i++)
        {
            if (i < 2)
                continue;

            count = 0;
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    count = 1;
                    break;
                }
            }
            if (count == 0)
            {
                printf("%d ", i);
            }
        }

        return 0;
    }