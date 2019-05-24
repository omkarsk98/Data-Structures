#include <stdio.h>
int main()
{
  int t;
  scanf("%d ", &t);
  while (t--)
  {
    char string[1000];
    fgets(string, sizeof(string), stdin);
    int k;
    scanf("%d", &k);
    int spaces = 0, i = 0;
    for (i = 0; i < string[i] != '\0'; i++)
      if (string[i] == ' ')
        spaces++;
    while (string[i - 1] == ' ')
    {
      spaces--;
      i--;
    }
    for (int j = 0; j < i; j++)
      string[j] == ' ' ? printf("%s", "%20") : printf("%c", string[j]);
    printf("\n");
  }
  return 0;
}