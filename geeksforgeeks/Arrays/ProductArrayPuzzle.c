#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int j = 0; j < n; j++)
      scanf("%d", &array[j]);
    double product = 1;
    for (int j = 0; j < n; j++)
      product *= array[j];
    int products[n];
    for (int j = 0; j < n; j++){
      products[j] = product / array[j];
      printf("%d ",products[j]);
    }
    printf("\n");
  }
  return 0;
}