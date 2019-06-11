#include<stdio.h>
int main()
{
	int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &array[i]);
    int i;
    for (i = 0; i < n; i++)
      if(array[i]!=0)
        break;
    i==0?printf("%d\n",-1):printf("%d\n",i-1);
  }
  return 0;
}