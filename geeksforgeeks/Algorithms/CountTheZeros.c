/* 
  Given an array of size N consisting of only 0's and 1's, 
  which is sorted in such a manner that all the 1's are placed
  first and then they are followed by all the 0's. You have to find  the count of all the 0's.
*/
#include <stdio.h>
int findZeros(int array[], int left, int right)
{
  if (left >= right)
    return left;
  int mid = (left + right) / 2;
  if (array[mid - 1] == 1 && mid > 0 && array[mid] == 0)
    return mid;
  if (array[mid] == 0)
    return findZeros(array, left, mid - 1);
  return findZeros(array, mid + 1, right);
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
    printf("%d\n", n - findZeros(array, 0, n));
  }
  return 0;
}