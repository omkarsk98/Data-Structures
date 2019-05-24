#include <stdio.h>
void adjustCount(int array[])
{
  for (int i = 0; i < 26; i++)
    array[i] = 0;
}
int main()
{
  int t;
  scanf("%d ", &t);
  while (t--)
  {
    char str[10000];
    scanf("%s", str);
    int max = 0, fMax = 0, start = 0, fStart = 0;
    int count[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
      if (count[str[i] - 'a'] != 1)
      {
        count[str[i] - 'a'] = 1;
        max++;
      }
      else
      {
        printf("Changing due to repeating %c at index %d\n", str[i], i);
        adjustCount(count);
        start = start + 1;
        max = 0;
      }
      if (max > fMax)
      {
        printf("Starting from %c at index %d\n", str[fStart], fStart);
        fMax = max;
        fStart = start;
      }
    }
    printf("%d\n", fMax);
  }
  return 0;
}