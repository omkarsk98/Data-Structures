#include <stdio.h>
int GCD(int a, int b)
{
  if (a % b == 0)
    return b;
  if (b % a == 0)
    return a;
  int n = a < b ? a / 2 : b / 2;
  while (n > 0)
  {
    if (a % n == 0 && b % n == 0)
      return n;
    n--;
  }
}
int main()
{
  int T;
  scanf("%d", &T);
  for (int i = 0; i < T; i++)
  {
    int n;
    scanf("%d", &n);
    int array[n];
    // scan for array here.
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &array[j]);
    }
    int gcd = GCD(array[0], array[1]);
    for (int j = 2; j < n; j++)
    {
      gcd = GCD(gcd, array[j]);
    }
    printf("%d\n", gcd);
  }
  return 0;
}