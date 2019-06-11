#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int arr1[n1], arr2[n2], arr3[n3];
    for (int i = 0; i < n1; i++)
      scanf("%d", &arr1[i]);
    for (int i = 0; i < n2; i++)
      scanf("%d", &arr2[i]);
    for (int i = 0; i < n3; i++)
      scanf("%d", &arr3[i]);
    int i = 0, j = 0, k = 0, prev = -1;
    short hasCommon = 0;
    while (i < n1 && j < n2 && k < n3)
    {
      if (arr1[i] == arr2[j] && arr2[j] == arr3[k] && ((prev == -1) || (prev != arr1[i])))
      {
        hasCommon = 1;
        prev = arr1[i];
        printf("%d ", arr1[i]);
        i++;
        j++;
        k++;
      }
      else if (arr1[i] < arr2[j])
        i++;
      else if (arr2[j] < arr3[k])
        j++;
      else
        k++;
    }
    hasCommon == 0 ? printf("-1\n") : printf("\n");
  }
  return 0;
}