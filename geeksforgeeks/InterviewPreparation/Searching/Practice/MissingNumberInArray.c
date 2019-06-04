#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d", &n);
    int array[n - 1];
    for (int i = 0; i < n - 1; i++)
      scanf("%d", &array[i]);
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
      sum += array[i];
    int fSum = (n * (n + 1)) / 2;
    printf("%d\n", fSum - sum);
  }
  return 0;
}