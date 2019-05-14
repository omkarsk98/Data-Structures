#include <stdio.h>
int main()
{
  //code
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int n, sum = 0;
    scanf("%d", &n);
    int array[n];
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &array[j]);
      sum += array[j];
    }
    printf("%d\n", sum);
  }
  return 0;
}