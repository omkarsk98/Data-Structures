#include <stdio.h>

int getNumber(int n)
{
  for (int j = 1; j <= n; j++)
  {
    if (n % j != 0)
      continue;
    for (int k = 1; k <= 9; k++)
    {
      if (k == n)
        return n;
      if (n % k != 0)
        continue;
      if (j * k == n)
        return ((j * 10) + k);
    }
  }
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
    int number = getNumber(n);
    printf("%d\n", number);
  }
  return 0;
}