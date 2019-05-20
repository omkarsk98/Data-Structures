#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  for (int tests = 0; tests < t; tests++)
  {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &array[i]);
    int ups = 0, downs = 0;
    for (int i = 1; i < n - 1; i++)
    {
      if (array[i] < array[i - 1] && array[i] < array[i + 1])
        downs++;
      else if (array[i] > array[i - 1] && array[i] > array[i + 1])
        ups++;
    }
    printf("%d %d\n", ups, downs);
  }
  return 0;
}