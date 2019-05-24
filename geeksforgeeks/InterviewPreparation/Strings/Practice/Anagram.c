#include <stdio.h>
int main()
{
  int t;
  scanf("%d ", &t);
  while (t--)
  {
    char str1[1000000], str2[1000000];
    scanf("%s %s", str1, str2);
    int count[26];
    for (int i = 0; str1[i] != '\0'; i++)
      count[str1[i] - 'a']++;
    for (int i = 0; str2[i] != '\0'; i++)
      count[str2[i] - 'a']--;
    char anagram = '1';
    for (int i = 0; i < 26; i++)
      if (count[i] != 0)
      {
        anagram = '0';
        break;
      }
    anagram == '1' ? printf("YES\n") : printf("NO\n");
  }
  return 0;
}