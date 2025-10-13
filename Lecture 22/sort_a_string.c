#include <stdio.h>
int main()
{
  char str="balllon";
  int n=strlen(str);

  for (int i = 0; i < n - 1; i++)
  {
    int swaps = 0;
    for (int j = 0; j < n - i - 1; j++)
    {
      if ('str[j]' > 'str[j + 1]')
      {
        int temp = a[j + 1];
        a[j + 1] = a[j];
        a[j] = temp;
        swaps++;
      }
    }
    if (swaps == 0)
      break;
  }
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);

  return 0;
}