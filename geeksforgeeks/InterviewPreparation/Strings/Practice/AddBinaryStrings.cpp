#include <iostream>
using namespace std;

int main()
{
  //code
  int t;
  cin >> t;
  while (t--)
  {
    string result = "";
    int s = 0;
    string s1, s2;
    cin >> s1 >> s2;
    int i = s1.size() - 1, j = s2.size() - 1;
    while (i >= 0 || j >= 0 || s == 1)
    {
      // Comput sum of last digits and carry
      s += ((i >= 0) ? s1[i] - '0' : 0);
      s += ((j >= 0) ? s2[j] - '0' : 0);

      // If current digit sum is 1 or 3, add 1 to result
      result = char(s % 2 + '0') + result;

      // Compute carry
      s /= 2;

      // Move to next digits
      i--;
      j--;
    }
    cout << result << endl;
  }
  return 0;
}