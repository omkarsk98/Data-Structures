#include <stdio.h>
int main()
{
  int t;
  scanf("%d ", &t);
  while (t--)
  {
    int size;
    scanf("%d", &size);
    char str[size];
    scanf("%s", str);
    int count[26] = {0};
    for (int i = 0; i < size; i++)
      count[str[i] - 'a']++;
    int yes = -1;
    for (int i = 0; i < size; i++)
      if (count[str[i] - 'a'] == 1)
      {
        yes = 1;
        printf("%c\n", str[i]);
        break;
      }
    if (yes == -1)
      printf("-1\n");
  }
  return 0;
}