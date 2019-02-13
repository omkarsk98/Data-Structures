#include <stdio.h>

void factorial(int n, int denominator)
{
  double result = 1, denominatorResult = 1;
  while (n > 0)
  {
    result *= n;
    n--;
  }
  while (denominator > 0)
  {
    denominatorResult *= denominator;
    denominator--;
  }
  printf("num = %f and deno = %f\n",result,denominatorResult);
  printf("%.0f\n",result/denominatorResult);
  // return (double)(result / denominatorResult);
}

int main()
{
  //code
  int T;
  scanf("%d", &T);
  for (int i = 0; i < T; i++)
  {
    int n, r;
    scanf("%d %d", &n, &r);
    factorial(n, n - r);
  }
  return 0;
}