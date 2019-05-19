#include <bits/stdc++.h>
using namespace std;
bool isSubSequence(vector<int> s1, vector<int> s2, int m, int n)
{
	if (m == 0)
		return true;
	if (n == 0)
		return false;
	if (s1[m - 1] == s2[n - 1])
		return isSubSequence(s1, s2, m - 1, n - 1);
	return isSubSequence(s1, s2, m, n - 1);
}
vector<int> find3Numbers(vector<int>, int);
// Driver program to test above function
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> a(n + 1);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		vector<int> res = find3Numbers(a, n);
		if (res.size() == 0)
			cout << 0 << endl;
		else if (res[0] < res[1] and res[1] < res[2])
			cout << isSubSequence(res, a, res.size(), n) << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}
vector<int> find3Numbers(vector<int> A, int N)
{
	//Your code here
	
}