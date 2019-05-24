#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    char string[1000];
    scanf("%s[^\n]%*c", string);
    int con = 0, vow = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
      if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
      {
        vow++;
        con = 0;
        if (vow > 5)
          break;
      }
      else if (string[i] == '?')
      {
        vow++;
        con++;
        if (vow > 5 || con > 3)
          break;
      }
      else
      {
        con++;
        vow = 0;
        if (con > 3)
          break;
      }
    }
    if (con > 3 || vow > 5)
      printf("%c\n", '0');
    else
      printf("%c\n", '1');
  }
  return 0;
}