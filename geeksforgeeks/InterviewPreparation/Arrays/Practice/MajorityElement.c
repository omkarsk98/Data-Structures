#include <stdio.h>
int main()
{
  //code
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int n;
    scanf("%d", &n);
    int array[n];
    int counts[n];
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &array[j]);
      counts[j] = 0;
    }
    for (int j = 0; j < n; j++)
    {
      counts[array[j]]++;
    }
    int max = -1, maxIndex=0;
    for (int j = 0; j < n; j++)
      if (counts[j] > n/2){
        max = j;
        break;
      }
    if (max != -1)
      printf("%d\n", max);
    else
      printf("-1\n");
  }
  return 0;
}