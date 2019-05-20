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
    int temp[n];
    for (int j = 0; j < n; j++)
      temp[j] = 0;
    for (int j = 0; j < n; j++)
      temp[(array[j] - 1) % n]++;
    int repeating = -1, missing = -1;
    for (int j = 0; j < n; j++)
    {
      if (temp[j] < 1)
        missing = j + 1;
      if (temp[j] > 1)
        repeating = j + 1;
    }
    printf("%d %d\n", repeating, missing);
  }
  return 0;
}