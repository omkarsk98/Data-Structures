#include <stdio.h>
#include <math.h>

int main()
{
  //code
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int n, m, j;
    scanf("%d %d", &n, &m);
    for (j = 1; pow(j, n) <= (float)m; j++)
    {
      if (pow(j, n) == (float)m)
      {
        printf("%d\n", j);
        break;
      }
    }
    if (pow(j, n) > m)
    {
      printf("-1\n");
      break;
    }
  }
  return 0;
}