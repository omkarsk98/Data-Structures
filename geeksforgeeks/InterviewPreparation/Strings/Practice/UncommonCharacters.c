#include <stdio.h>
int main()
{
  int t;
  scanf("%d ", &t);
  while (t--)
  {
    char s1[100000], s2[100000];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    int chars[26] = {0};
    for (int i = 0; s1[i] != '\0'; i++)
    {
      chars[s1[i] - 'a'] = 1;
    }
    for (int i = 0; s2[i] != '\0'; i++)
    {
      if (chars[s2[i] - 'a'] == 1 || chars[s2[i] - 'a'] == -1)
        chars[s2[i] - 'a'] = -1;
      else
        chars[s2[i] - 'a'] = 2;
    }
    for (int i = 0; i < 26; i++)
    {
      if (chars[i] == 1 || chars[i] == 2)
      {
        printf("%c", i + 'a');
      }
    }
    printf("\n");
  }
  return 1;
}