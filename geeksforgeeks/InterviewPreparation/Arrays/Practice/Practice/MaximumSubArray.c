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
    int sum = 0, msum = 0, start = 0, end = -1, fstart = -1, fend = -1, count = 0, maxm = 0;
    for (int j = 0; j < n; j++)
    {
      if (array[j] >= 0)
      {
        end++;
        sum += array[j];
        count++;
      }
      if (sum > msum)
      {
        msum = sum;
        fstart = start;
        fend = end;
      }
      else if (sum == msum && count > maxm)
      {
        maxm = count;
        fstart = start;
        fend = end;
      }
      if (array[j] < 0)
      {
        count = 0;
        start = j + 1;
        end = j;
        sum = 0;
      }
    }
    if (fstart != -1 && fend != -1)
    {
      for (int j = fstart; j <= fend; j++)
        printf("%d ", array[j]);
      printf("\n");
    }
    return 0;
  }
}