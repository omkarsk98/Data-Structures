// 12 23 34 45 55 56 76 78 95
#include <bits/stdc++.h>
using namespace std;
int bin_search(int A[], int left, int right, int k)
{
  int mid = (int)((left + right) / 2);
  if (left == right && A[mid] != k)
    return -1;
  if (A[mid] == k)
    return mid;
  return A[mid] < k ? bin_search(A, mid + 1, right, k) : bin_search(A, left, mid - 1, k);
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++)
      cin >> a[i];
    int key;
    cin >> key;
    int found = bin_search(a, 0, N - 1, key);
    cout << found << endl;
  }
}