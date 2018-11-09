#include <stdio.h>
#include<time.h>
int main()
{
  clock_t start = clock();
  int n;
  // printf("Enter number of hills:");
  scanf("%d", &n);
  int hills[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &hills[i]);
  int pairs = n - 1;
  for (int i = 0; i < n - 2; i++)
  {
    for (int j = 1; j < n - 1; j++)
    {
      if (hills[i] > hills[j] && hills[j] < hills[j + 1])
        pairs++;
      if (hills[j]>hills[j+1])
        continue;
    }
  }
  printf("%d",pairs);
  // printf("\n");
  clock_t end = clock();
  double time_spent = (double)(end-start)/CLOCKS_PER_SEC;
  printf("\nTime:%f\n",time_spent);
}