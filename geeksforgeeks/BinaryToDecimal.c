#include <stdio.h>
#include <math.h>

int main()
{
  //code
  int T;
  scanf("%d", &T);
  for (int i = 0; i < T; i++)
  {
    long bin;
    scanf("%ld", &bin);
    int nextNum, i = 0, sum = 0;
    while (bin > 0)
    {
      nextNum = bin % 10;
      bin /= 10;
      sum += nextNum * (int)pow(2,(float)i);
      i++;
    }
    printf("%d\n", sum);
  }
  return 0;
}