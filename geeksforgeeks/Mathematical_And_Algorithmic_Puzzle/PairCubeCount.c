#include <stdio.h>

int main()
{
  //code
  int t;
  scanf("%d", &t);
  for (int tests = 0; tests < t; tests++)
  {
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 1; (i * i * i) <= n; i++)
    {
      for (int j = 0; (j * j * j) <= n; j++)
      {
        if ((i * i * i) + (j * j * j) == n)
          count++;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}