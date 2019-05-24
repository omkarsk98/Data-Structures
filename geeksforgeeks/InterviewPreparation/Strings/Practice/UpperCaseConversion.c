#include <stdio.h>
int main()
{
  int t;
  char b[100];
  scanf("%d", &t);
  //to read the endline
  fgets(b, sizeof(b), stdin);
  while (t--)
  {
    char a[1000];
    int i;
    fgets(a, sizeof(a), stdin);
    if ((a[0] >= 'a') && (a[0] <= 'z') && a[0] != ' ')
      a[0] -= 32;
    for (i = 0; a[i] != '\0'; i++)
    {
      if (((a[i] == ' ') && (a[i + 1] >= 'a') && (a[i + 1] <= 'z')))
        a[i + 1] -= 32;
    }
    printf("%s", a);
  }
  return 0;
}