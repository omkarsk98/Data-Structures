#include <stdio.h>
int max(int x, int y)
{
  return x > y ? x : y;
}

int min(int x, int y)
{
  return x < y ? x : y;
}
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
    int left[n], right[n];
    left[0] = array[0];
    for (int j = 1; j < n; j++)
      left[j] = min(array[j], left[j - 1]);
    right[n - 1] = array[n - 1];
    for (int j = n - 2; j >= 0; j--)
      right[j] = max(array[j], right[j + 1]);
    int j = 0, k = 0, maxDiff = -1;
    while (j < n && k < n)
    {
      if (left[k] <= right[j])
      {
        maxDiff = max(maxDiff, j - k);
        j = j + 1;
      }
      else
        k++;
    }
    maxDiff == -1 ? printf("0\n") : printf("%d\n", maxDiff);
  }
  return 0;
}