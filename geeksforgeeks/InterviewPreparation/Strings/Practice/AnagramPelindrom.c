#include <stdio.h>
int main()
{
  int t;
  scanf("%d ", &t);
  while (t--)
  {
    char string[1000];
    scanf("%[^\t\n]%*c", string);
    int chars[26] = {0};
    for (int i = 0; string[i] != '\0'; i++)
    {
      chars[string[i] - 'a']++;
    }
    int i = 0;
    int count = 0;
    for (i = 0; i < 26; i++)
    {
      if (chars[i] % 2 != 0)
        count++;
      if (count > 1)
        break;
    }
    i == 26 ? printf("Yes\n") : printf("No\n");
  }
  return 0;
}