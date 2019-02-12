#include <stdio.h>

int isPrime(int n)
{
  int j;
  for (j = 2; j <= n / 2; j++)
  {
    if (n % j == 0)
      break;
  }
  if (j - 1 == n / 2)
    return 1;
  return -1;
}

int main()
{
  //code
  int T;
  scanf("%d", &T);
  for (int i = 0; i < T; i++)
  {
    int n, j, k;
    scanf("%d", &n);
    for (j = 2; j <= n; j++)
    {
      // printf("\nOuter for\n");
      if (isPrime(j) == 1)
        printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}