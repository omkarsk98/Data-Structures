#include <stdio.h>
int search(int arr[], int l, int h, int key)
{
  if (l > h)
    return -1;

  int mid = (l + h) / 2;
  if (arr[mid] == key)
    return mid;
  if (arr[l] <= arr[mid])
  {
    if (key >= arr[l] && key <= arr[mid])
      return search(arr, l, mid - 1, key);
    return search(arr, mid + 1, h, key);
  }
  if (key >= arr[mid] && key <= arr[h])
    return search(arr, mid + 1, h, key);
  return search(arr, l, mid - 1, key);
}
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, key;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &array[i]);
    scanf("%d", &key);
    printf("%d\n", search(array, 0, n - 1, key));
  }
  return 0;
}