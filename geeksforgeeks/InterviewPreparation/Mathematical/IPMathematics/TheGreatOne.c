#include <stdio.h>

int getFactorCount(int n)
{
  int count = 1;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
      count++;
    if (count > 3)
      return -1;
  }
  if (count == 3)
    return 1;
  return -1;
}

int main()
{
  //code
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int size;
    scanf("%d", &size);
    int array[size];
    for (int j = 0; j < size; j++)
    {
      scanf("%d", &array[j]);
    }
    int possible[size];
    int k = 0;
    for (int j = 0; j < size; j < j++)
    {
      int correctNumber = getFactorCount(j);
      if (correctNumber == 1)
      {
        possible[k] = correctNumber;
        k++;
      }
    }
    // for(int m=0;m<)
  }
  return 0;
}