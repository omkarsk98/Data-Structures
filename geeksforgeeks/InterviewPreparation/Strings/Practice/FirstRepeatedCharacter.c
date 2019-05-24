#include <stdio.h>
int main()
{
  int t;
  scanf("%d ", &t);
  while (t--)
  {
    char string[10000];
    fgets(string, sizeof(string), stdin);
    int chars[26];
    int yes = 0;
    for (int i = 0; i < 26; i++)
      chars[i] = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
      if (chars[string[i] - 'a'] == 1)
      {
        printf("%c\n", string[i]);
        yes = 1;
        break;
      }
      chars[string[i] - 'a'] = 1;
    }
    if (yes == 0)
      printf("-1\n");
  }
  return 0;
}