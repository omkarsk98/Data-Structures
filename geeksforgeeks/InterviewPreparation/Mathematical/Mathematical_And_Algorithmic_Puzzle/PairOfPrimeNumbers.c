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
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int n;
    scanf("%d", &n);
    for (int j = 2; j <= n; j++)
    {
      if (isPrime(j) == 1)
      {
        for (int l = 0; (j * l) <= n;l++){
          if(isPrime(l)==1)
            printf("%d %d ",j,l);
        }
      }
    }
    printf("\n");
  }
  return 0;
}