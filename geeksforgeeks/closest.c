#include <stdio.h>

int main()
{
  //code
  int T;
  scanf("%d", &T);
  for (int i = 0; i < T; i++)
  {
    int m, n;
    scanf("%d %d", &m, &n);
    int j = m, k = m;
    int closest;
    while (1)
    {
      if (k == 0)
        continue;
      // printf("k check for k=%d.. %d\t", k, k % n);
      if (k % n == 0)
      {
        closest = k;
        break;
      }
      // printf("j check for j=%d.. %d\n", j, j % n);
      if (j % n == 0)
      {
        closest = j;
        break;
      }
      j++;
      k--;
    }
    if (closest < 0)
      closest *= -1;
    printf("%d\n", closest);
  }
  return 0;
}