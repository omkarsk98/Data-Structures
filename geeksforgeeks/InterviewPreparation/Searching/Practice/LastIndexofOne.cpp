#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int i;
    for (i = s.size()-1; i >= 0  && s[i] != '1'; i--)
    {
    }
    cout << i << endl;
  }
  return 0;
}