#include <stdio.h>
#include<string.h>
int main()
{
  int T, A, B, k, j;
  scanf("%d", &T);
  for (int i = 0; i < T; i++)
  {
    scanf("%d", &A);
    scanf("%d", &B);
    char X[A], Y[B];
    scanf("%s", X);
    scanf("%s", Y);
    char new[B];
    j = 0;
    k = 0;
    int l = 0;
    while (k<=B)
    {
      if(X[j]<=90 && X[j]>=65 && (X[j] != Y[k] && X[j] - 32 != Y[k])){
        new[l] = X[j];
        l++;
        j++;
      }
      else if (X[j] == Y[k] || X[j] - 32 == Y[k])
      {
        new[l] = Y[k];
        l++;
        j++;
        k++;
      }
      else
        j++;
    }
    if (strcmp(new, Y) == 0)
      printf("Yes");
    else
      printf("No");
  }
  return 0;
}