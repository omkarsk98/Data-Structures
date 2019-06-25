#include <stdio.h>
#include <string.h>
#define RANGE 255
void countSort(char arr[])
{
  int count[26], i;
  for (i = 0; arr[i]!='\0'; ++i)
    ++count[arr[i]-'a'];
}
int main()
{
  long int t;
  scanf("%ld", &t);
  while (t--)
  {
    long int n;
    scanf("%ld", &n);
    char arr[n + 1];
    scanf("%s", arr);
    countSort(arr);
    printf("%s", arr);
  }
  return 0;
}