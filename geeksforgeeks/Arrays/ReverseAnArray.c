#include <stdio.h>
int main()
{
  //code
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int n, temp;
    scanf("%d", &n);
    int array[n];
    for (int j = 0; j < n; j++)
      scanf("%d", &array[j]);
    int start = 0, end = n-1;
    while (start < end)
    {
      temp = array[start];
      array[start] = array[end];
      array[end] = temp;
      start++;
      end--;
    }
    for (int j = 0; j < n; j++)
      printf("%d ", array[j]);
    printf("\n");
  }
  return 0;
}