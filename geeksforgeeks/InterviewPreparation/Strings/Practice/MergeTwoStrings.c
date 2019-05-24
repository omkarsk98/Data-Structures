#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    char str1[10000], str2[10000];
    scanf("%s %s", str1, str2);
    int i = 0, j = 0;
    while (str1[i] != '\0' && str2[j] != '\0')
      printf("%c%c", str1[i++], str2[j++]);
    while (str1[i] != '\0')
      printf("%c", str1[i++]);
    while (str2[j] != '\0')
      printf("%c", str2[j++]);
    printf("\n");
  }
  return 0;
}