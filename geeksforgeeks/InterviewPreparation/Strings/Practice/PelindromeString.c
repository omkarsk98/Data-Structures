#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d ", &n);
    char string[n];
    fgets(string, n + 1, stdin);
    int i;
    // puts(string);
    // printf("%c\n", string[n - 1]);
    for (i = 0; i < n / 2; i++)
    {
      if (string[i] != string[n - 1 - i])
      {
        break;
      }
    }
    i == n / 2 ? printf("Yes\n") : printf("No\n");
  }
  return 0;
}