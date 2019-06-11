#include <stdio.h>
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
    int count = 0;
    for (int i = 1; i < n; i++)
      if(array[i]==array[i-1])
        count++;
    printf("%d\n",count);
  }
  return 0;
}