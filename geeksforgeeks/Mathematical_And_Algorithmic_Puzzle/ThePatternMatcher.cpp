
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
void follPatt(string);
//Position this line where user code will be pasted.
int main()
{
  int t = 1;
  // cin>>t;
  while (t--)
  {

    // string s = "xxxxyyyyxxxyyyxxyyxy";
    string s = "x";
    // cin>>s;
    follPatt(s);
  }
  return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
void follPatt(string s)
{
  //Your code here
  int size = s.length();
  int i = 0, j = 0;
  for (i = 0; i < size; i++)
  {
    if (s[i] == 'x')
      j++;
    else
      j--;
    // cout<<"j as "<<j<<endl;
    if (j < 0)
      break;
    if (i != 0 && s[i] == 'x' && s[i - 1] == 'y')
    {
      if (j != 1)
        break;
    }
  }
  // cout<<"i as "<<i<<" and j as "<<j<<endl;
  if (i != size || j!=0)
    cout << 0;
  else
    cout << 1;
  cout << endl;
}