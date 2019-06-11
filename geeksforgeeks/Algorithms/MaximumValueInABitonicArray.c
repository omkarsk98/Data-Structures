/* 
15
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
*/
#include <stdio.h>
int findMax(int array[], int left, int right)
{
  if (left >= right)
    return array[left];
  int mid = (left + right) / 2;
  if (array[mid] >= array[mid - 1] && array[mid] >= array[mid + 1] && mid > 0)
    return array[mid];
  if (array[mid] <= array[mid + 1] && array[mid] >= array[mid - 1])
    return findMax(array, mid + 1, right);
  return findMax(array, left, mid - 1);
}
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
    printf("%d\n", findMax(array, 0, n-1));
  }
  return 0;
}