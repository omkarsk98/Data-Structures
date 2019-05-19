#include <stdio.h>
#include <stdbool.h>
int main()
{
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int n;
    scanf("%d", &n);
    int array[n];
    bool leaders[n];
    for (int j = 0; j < n; j++)
      scanf("%d", &array[j]);
    int max = 0;
    for (int j = n - 1; j >= 0; j--)
      if (max <= array[j]){
        leaders[j] = true;
        max = array[j];
      }
      else 
        leaders[j] = false;
    for (int j = 0; j < n; j++)
      if (leaders[j] == true)
        printf("%d ", array[j]);
    printf("\n");
  }
  return 0;
}