#include <stdio.h>
int main()
{
  int T, i;
  scanf("%d", &T);
  for (i = 0; i < T; i++)
  {

    int N, D;
    scanf("%d%d", &N, &D);
    int j, sp[N], C[N];
    for (j = 0; j < N; j++)
    {
      scanf("%d", &sp[j]);
    }
    for (j = 0; j < N; j++)
    {
      scanf("%d", &C[j]);
    }
    //speed=d/t
    int z = 0, temp = 10000;
    float y = 0;
    for (z = 0; z < N; z++)
    {

      y = (float)D / sp[z];
      if (y <= 2 && temp > C[z])
      {
        temp = C[z];
      }
    }
    if (temp != 10000)
    {
      printf("%d\n", temp);
    }
    else
    {
      printf("BLACK DOT\n");
    }
  }
}