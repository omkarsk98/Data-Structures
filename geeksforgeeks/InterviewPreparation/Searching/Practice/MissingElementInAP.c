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
    int mid = (int)((0 + n - 1) / 2);
    int d = array[mid] - array[mid - 1] < array[mid + 1] - array[mid] ? array[mid] - array[mid - 1] : array[mid + 1] - array[mid];
    int missing = 0;
    for (int i = 1; i < n; i++)
    {
      if (array[i] - array[i - 1] != d)
        missing = array[i - 1] + d;
    }
    printf("%d\n",missing);
  }
  return 0;
}