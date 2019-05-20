#include <stdio.h>
int elementIsPresent(int array[], int size, int element)
{
  for (int i = 0; i < size; i++)
    if (array[i] == element)
      return 0;
  return 1;
}
void printUniques(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    int print = elementIsPresent(array, i, array[i]);
    if (print == 1)
      printf("%d ", array[i]);
  }
  printf("\n");
}
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
    printUniques(array, n);
  }
  return 1;
}