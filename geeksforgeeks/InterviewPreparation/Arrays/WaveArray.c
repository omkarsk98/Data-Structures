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
    for (int j = 0; j < n-1; j += 2)
    {
      int temp = array[j];
      array[j] = array[j + 1];
      array[j + 1] = temp;
    }
    for (int j = 0; j < n; j++)
      printf("%d ", array[j]);
    printf("\n");
  }
  return 0;
}