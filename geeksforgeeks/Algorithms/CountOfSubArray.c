#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, k;
    scanf("%d %d", &n, &k);
    int array[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &array[i]);
    int i = 0, s = 0;
    while (i < n)
    {
      if (array[i] > k)
      {
        i++;
        continue;
      }
      int count = 0;
      while (i < n && array[i] <= k)
      {
        i++;
        count++;
      }
      s += (count * (count + 1) / 2);
    }
    printf("%d\n", (n * (n + 1)) / 2 - s);
  }
  return 0;
}