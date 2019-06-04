#include <stdio.h>
int main()
{
  //code
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, x;
    scanf("%d %d", &n, &x);
    int array[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &array[i]);
    int count = 0;
    for (int i = 0; i < n; i++)
      if (array[i] == x)
        count++;
    count == 0 ? printf("-1\n") : printf("%d\n", count);
  }
  return 0;
}