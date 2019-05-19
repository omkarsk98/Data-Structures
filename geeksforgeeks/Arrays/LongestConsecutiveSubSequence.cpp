#include <bits/stdc++.h>
using namespace std;
int findLongestConseqSubseq(int[], int);
int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int a[n];

    // input array elements
    for (int i = 0; i < n; i++)
      cin >> a[i];

    cout << findLongestConseqSubseq(a, n) << endl;
  }
  return 0;
}
int findLongestConseqSubseq(int arr[], int n)
{
  //Your code here
}