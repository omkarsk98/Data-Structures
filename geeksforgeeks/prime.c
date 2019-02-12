#include <stdio.h>

int main()
{
  //code
  int T;
  scanf("%d", &T);
  for (int i = 0; i < T; i++)
  {
    int n;
    scanf("%d", &n);
    int j;
    for (j = 2; j <= n / 2; j++)
    {
      if (n % j == 0)
        break;
    }
    if (j-1 == n / 2)
      printf("Yes\n");
    else
      printf("No\n");
  }
  return 0;
}