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
    int val, nextVal;
    for (int i = 0; i < n; i++)
    {
      if (array[i] <= 0 || array[i] > n)
        continue;
      val = array[i];
      while (array[val - 1] != val)
      {
        nextVal = array[val - 1];
        array[val - 1] = val;
        val = nextVal;
        if (val <= 0 || val > n)
          break;
      }
    }
    int i;
    for ( i = 0; i < n; i++)
    {
      if (array[i] != i + 1)
      {
        break;
      }
    }
    i==n?printf("%d\n",array[n-1]+1):printf("%d\n",i+1);
  }
  
}