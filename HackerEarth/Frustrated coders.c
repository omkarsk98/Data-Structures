#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int skill[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &skill[i]);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n - 1; j++)
      if (skill[j] > skill[j + 1])
      {
        int temp = skill[j];
        skill[j] = skill[j + 1];
        skill[j + 1] = temp;
      }
  // sorted array
  int sum = 0;
  for (int i = 1; i < n; i++)
  {
    if (skill[i - 1] < skill[i])
      skill[i-1] = 0;
    sum += skill[i-1];
  }
  sum+=skill[n-1];
  printf("%d", sum);
}