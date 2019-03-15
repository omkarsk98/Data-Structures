#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  int restruct = 0;
  scanf("%d", &n);
  char string[n];
  scanf("%s", &string);
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < i + 3; j++)
    {
      if (string[i] == string[j])
      {
        restruct++;
        if (string[i] == "R")
          string[i] = "G";
        else if (string[i] == "G")
          string[i] = "B";
        else if (string[i] == "B")
          string[i] = "R";
      }
    }
  }
  printf("%d\n%s",restruct,string);
  return 0;
}
