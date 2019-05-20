#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int n, m;
    scanf("%d %d", &n, &m);
    int A[n], B[m];
    for (int j = 0; j < n; j++)
      scanf("%d", &A[j]);
    for (int j = 0; j < m; j++)
      scanf("%d", &B[j]);
    int nIndex = 0, mIndex = 0;
    while (nIndex < n && mIndex < m)
    {
      printf("%d ", A[nIndex]);
      printf("%d ", B[mIndex]);
      nIndex++;
      mIndex++;
    }
    while (nIndex < n)
    {
      printf("%d ", A[nIndex]);
      nIndex++;
    }
    while (mIndex < m)
    {
      printf("%d ", B[mIndex]);
      mIndex++;
    }
    printf("\n");
  }
  return 0;
}