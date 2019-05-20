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
    int left[n], right[n];
    left[0] = array[0];
    for (int j = 1; j < n; j++)
    {
      // int max = left[j - 1] > array[j] ? left[j - 1] : array[j];
      left[j] = left[j - 1] > array[j] ? left[j - 1] : array[j];
    }
    right[n - 1] = array[n - 1];
    for (int j = n - 2; j >= 0; j--)
      {
        // int max = right[j + 1] > array[j] ? right[j + 1] : array[j];
        right[j] = right[j + 1] > array[j] ? right[j + 1] : array[j];
      }
    int water = 0;
    for (int j = 0; j < n; j++)
    {
      int min = left[j] < right[j] ? left[j] : right[j];
      water += min - array[j];
    }
    printf("%d\n", water);
  }
  return 0;
}