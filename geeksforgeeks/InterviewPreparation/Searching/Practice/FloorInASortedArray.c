#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, x;
    scanf("%d %d", &n, &x);
    int array[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &array[i]);
    int i;
    for (i = 0; i < n && array[i] <= x; i++)
    {
    }
    i == n &&array[i - 1] > x ? printf("-1\n") : printf("%d\n", i - 1);
  }
  return 0;
}