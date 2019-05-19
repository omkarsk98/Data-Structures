#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int j = 0; j < n; j++)
      scanf("%d", &array[j]);
    int sum;
    scanf("%d", &sum);
    int l = 0, r = n - 1;
    short found = 0;
    while (l < r)
    {
      if (array[l] + array[r] == sum)
      {
        printf("%d %d %d\n", array[l], array[r], sum);
        l++;
        r--;
        found = 1;
      }
      else if (array[l] + array[r] < sum)
        l++;
      else
        r--;
    }
    if (found != 1)
      printf("-1\n");
  }
  return 1;
}