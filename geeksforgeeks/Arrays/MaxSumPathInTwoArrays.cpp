/* 
  The function returns the sum of the maximum sum path to reach 
  from beginning of any array to end of any of the two arrays.
*/
#include <bits/stdc++.h>
using namespace std;
int max_path_sum(int[], int[], int, int);
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N, M;
    cin >> N >> M;
    fflush(stdin);
    int a[N], b[M];
    for (int i = 0; i < N; i++)
      cin >> a[i];
    for (int i = 0; i < M; i++)
      cin >> b[i];
    int result = max_path_sum(a, b, N, M);
    cout << result << endl;
  }
}
int max_path_sum(int A[], int B[], int l1, int l2)
{
  int i = 0, j = 0;
  int result = 0, sum1 = 0, sum2 = 0;

  while (i < l1 && j < l2)
  {
    if (A[i] < B[j])
      sum1 += A[i++];
    else if (A[i] > B[j])
      sum2 += B[j++];
    else
    {
      result += sum1 > sum2 ? sum1 : sum2;
      sum1 = 0, sum2 = 0;
      while (i < l1 && j < l2 && A[i] == B[j])
      {
        result = result + A[i++];
        j++;
      }
    }
  }
  while (i < l1)
    sum1 += A[i++];
  while (j < l2)
    sum2 += B[j++];
  result += sum1 > sum2 ? sum1 : sum2;
  return result;
}