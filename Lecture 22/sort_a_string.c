#include <stdio.h>
#include <string.h>

int main()
{
  char str[] = "balllon";
  int n = strlen(str);

  for (int i = 0; i < n - 1; i++)
  {
    int swaps = 0;
    for (int j = 0; j < n - i - 1; j++)
    {
      if (str[j] > str[j + 1])
      {
        char temp = str[j + 1];
        str[j + 1] = str[j];
        str[j] = temp;
        swaps++;
      }
    }
    if (swaps == 0)
      break;
  }

  for (int i = 0; i < n; i++)
    printf("%c", str[i]);

  return 0;
}