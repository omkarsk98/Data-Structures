#include <stdio.h>

int main()
{
  //code
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    long int n;
    scanf("%ld", &n);
    long int sum = 1;
    for (long int j = 2; j * j <= n; j++)
    {
      if (n % j == 0)
      {
        // sum = sum + j;
        // printf("Adding %ld\n",j);
        if (j * j != n)
          sum = sum + j + n / j;
        else
          sum = sum + j;
      }
    }
    if (sum == n && n != 1)
      printf("1\n");
    else
      printf("0\n");
  }
  return 0;
}