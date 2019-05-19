#include <stdio.h>
int main()
{
  int T;
  scanf("%d", &T);
  for (int i = 0; i < T; i++)
  {
    int a, b;
    scanf("%d %d", &a, &b);
    int n;
    if (a % b == 0)
    {
      n = b;
      printf("%d\n", n);
      continue;
    }
    if (b % a == 0)
    {
      n = a;
      printf("%d\n", n);
      continue;
    }
    n = a < b ? a / 2 : b / 2;
    while (n > 0)
    {
      if (a % n == 0 && b % n == 0)
        break;
      n--;
    }
    printf("%d\n", n);
  }
  return 0;
}