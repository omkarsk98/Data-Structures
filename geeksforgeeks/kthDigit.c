#include <stdio.h>
#include <math.h>
int main()
{
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int a, b, k;
    scanf("%d %d %d", &a, &b, &k);
    long int result = pow(a, b);
    for (int j = 1; j < k; j++)
    {
      result /= 10;
    }
    printf("%d\n", (int)(result % 10));
  }
  return 1;
}