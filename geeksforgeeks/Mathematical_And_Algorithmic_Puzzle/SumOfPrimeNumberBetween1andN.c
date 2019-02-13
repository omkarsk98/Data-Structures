#include <stdio.h>
// #include <time.h>

int main()
{
  // clock_t begin = clock();
  //code
  int T;
  scanf("%d", &T);
  for (int i = 0; i < T; i++)
  {
    int n, j, k, sum = 0;
    scanf("%d", &n);
    for (j = 2; j <= n; j++)
    {
      for (k = 2; k <= j / 2; k++)
        if (j % k == 0)
          break;
      if (k - 1 == j / 2)
      {
        sum += j;
      }
    }
    printf("%d\n", sum);
  }
  // clock_t end = clock();
  // double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  // printf("Execution time:%f\n", time_spent);
  return 0;
}