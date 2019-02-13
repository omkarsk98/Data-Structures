#include <bits/stdc++.h>
using namespace std;
void addFraction(int num1, int den1, int num2,
                 int den2);
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int a, b, c, d, resultNum, resultDen;
    cin >> a >> b >> c >> d;
    addFraction(a, b, c, d);
  }
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this function*/
int gcd(int a, int b)
{
  if (a % b == 0)
    return b;
  if (b % a == 0)
    return a;
  int n = a < b ? a / 2 : b / 2;
  while (n > 0)
  {
    if (a % n == 0 && b % n == 0)
      return n;
    n--;
  }
}
void addFraction(int num1, int den1, int num2, int den2)
{
  //Your code here
  int numx, denx;
  numx = (num1 * den2) + (num2 * den1);
  denx = den1 * den2;
  int factorBy = gcd(numx, denx);
  numx /= factorBy;
  denx /= factorBy;
  cout << numx << "/" << denx << endl;
}