// This is a test code to check the units place of a factorial till 100
#include <stdio.h>

int main()
{
  //code
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int n;
    long int factorial = 1;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
      factorial *= j;
      printf("Factorial = %ld\n", factorial);
      factorial = factorial%1000;
    }
    // while(n>1){
    //   factorial *= n;
    //   printf("%ld\n",factorial);
    //   n--;
    // }
    printf("%ld\n", (factorial % 10));
  }
  return 0;
}