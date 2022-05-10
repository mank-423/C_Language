#include <stdio.h>

int main()
{
  int ar[5], n, i, j, temp;
  
  for (i = 0; i < 5; i++)
    scanf("%d", &ar[i]);

  for (j = 0 ; j < n - 1; j++)
  {
    for (i = 0 ; i < n - j - 1; i++)
    {
      if (ar[i] > ar[i+1]) /* For decreasing order use '<' instead of '>' */
      {
        temp      = ar[i];
        ar[i]   = ar[i+1];
        ar[i+1] = temp;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (j = 0; j < n; j++)
     printf("%d\n", ar[j]);

  return 0;
}
