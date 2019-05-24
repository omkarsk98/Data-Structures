#include <stdio.h>
int main()
{
  int t;
  scanf("%d ", &t);
  while (t--)
  {
    char str1[1000000], str2[1000000];
    scanf("%[^\n]%*c", str1);
    scanf("%[^\n]%*c", str2);
    int i, countI = 0, countJ = 0;
    for (i = 0; str1[i] != '\0'; i++)
      countI++;
    for (i = 0; str2[i] != '\0'; i++)
      countJ++;
    if (countI != countJ)
    {
      printf("0\n");
      continue;
    }
    for (i = 0; str1[i] != '\0'; i++)
    {
      if (str1[i] == str2[0])
      {
        int j;
        for (j = 0; str2[j] != '\0'; j++)
          if (str1[(j + i) % countI] != str2[j])
            break;
        if (j == countJ)
        {
          printf("1\n");
          break;
        }
      }
    }
    if (i == countI)
      printf("0\n");
  }
  return 0;
}