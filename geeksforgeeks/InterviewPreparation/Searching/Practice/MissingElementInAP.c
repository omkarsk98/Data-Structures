#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &array[i]);
    int d, missing;
    if (n == 2)
    {
      d = (array[1] - array[0]) / 2;
      missing = array[0] + d;
    }
    else
    {
      int mid = (int)((0 + n - 1) / 2);
      d = array[mid] - array[mid - 1] < array[mid + 1] - array[mid] ? array[mid] - array[mid - 1] : array[mid + 1] - array[mid];
      missing = 0;
      for (int i = 1; i < n; i++)
      {
        if (array[i] - array[i - 1] != d)
          missing = array[i - 1] + d;
      }
    }

    printf("%d\n", missing);
  }
  return 0;
}