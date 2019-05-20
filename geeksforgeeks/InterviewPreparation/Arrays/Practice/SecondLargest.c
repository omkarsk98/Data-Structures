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
    int largest = 0;
    for (int j = 0; j < n; j++)
      if (largest < array[j])
        largest = array[j];
    int secondLargest=0;
    for (int j=0;j<n;j++){
      if(array[j]==largest)
        continue;
      if (secondLargest < array[j])
        secondLargest = array[j];
    }
    printf("%d\n",secondLargest);
  }
  return 1;
}