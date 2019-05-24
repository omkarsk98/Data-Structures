#include <stdio.h>
#include <string.h>
void swap(char *a, char *b)
{
  char t = *a;
  *a = *b;
  *b = t;
}
int partition(char arr[], int low, int high)
{
  int pivot = arr[high];
  int i = (low - 1);

  for (int j = low; j <= high - 1; j++)
  {
    if (arr[j] >= pivot)
    {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}

void quickSort(char arr[], int low, int high)
{
  if (low < high)
  {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--)
  {
    char string[100000];
    scanf("%s", string);
    quickSort(string, 0, strlen(string));
    printf("%s\n", string);
  }
  return 0;
}