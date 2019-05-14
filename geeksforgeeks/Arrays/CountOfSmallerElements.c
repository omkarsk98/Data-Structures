#include <stdio.h>
int main()
{
  //code
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int n;
    scanf("%d", &n);
    int array[n];
    for(int j=0;j<n;j++)
      scanf("%d",&array[j]);
    int x;
    scanf("%d",&x);
    int count=0;
    for (count=0;array[count]<=x && count<n;count++){}
    printf("%d\n",count);

  }
  return 0;
}