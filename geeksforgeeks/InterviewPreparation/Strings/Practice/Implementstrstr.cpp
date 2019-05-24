#include <bits/stdc++.h>
using namespace std;
int strstr(string s, string x)
{
  int i;
  for (i = 0; i < s.size() - x.size() + 1; i++)
  {
    if (s[i] == x[0])
    {
      int j;
      for (j = 0; j < x.size(); j++)
        if (s[(j + i)] != x[j])
          break;
      if (j == x.size())
        return i;
    }
  }
  if (i == s.size() - x.size()+1)
    return -1;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string a;
    string b;

    cin >> a;
    cin >> b;

    cout << strstr(a, b) << endl;
  }
}
