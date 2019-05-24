#include <stdio.h>
int main()
{
  int t;
  scanf("%d ", &t);
  while (t--)
  {
    char string[200];
    fgets(string, sizeof(string), stdin);
    int max = 0, finalMax = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
      if (string[i] >= '0' && string[i] <= '9')
        max = max * 10 + (int)(string[i] - (int)'0');
      if (string[i - 1] <= '9' && string[i - 1] >= '0' && string[i] >= 'a')
        max = 0;
      if (max > finalMax)
        finalMax = max;
    }
    printf("%d\n", finalMax);
  }
  return 0;
}