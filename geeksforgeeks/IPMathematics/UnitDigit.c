#include <stdio.h>

int factorial(int n)
{
  if (n == 0)
    return 1;
  return n * factorial(n - 1);
}

int main()
{
  //code
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int n, fact;
    scanf("%d", &n);
    if (n <= 4)
    {
      fact = factorial(n);
      printf("%d\n", (fact % 10));
    }
    else
    {
      printf("%d\n", 0);
    }
  }
  return 0;
}