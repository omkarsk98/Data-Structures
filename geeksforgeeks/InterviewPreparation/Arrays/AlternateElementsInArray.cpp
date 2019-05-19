
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int ar[100001] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
      cin >> ar[i];
    print(ar, n);
    cout << endl;
  }
  return 0;
}

void print(int ar[], int n)
{
  for (int i = 0; i < n; i += 2)
    printf("%d ", ar[i]);
  // printf("\n");
  // code here
}