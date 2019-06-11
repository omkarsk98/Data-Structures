#include <bits/stdc++.h>
using namespace std;
int transitionPoint(int arr[], int n)
{
	int i;
	for (i = 0; i < n - 1 && arr[i] == 0; i++)
	{
	}
	return i;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n], i;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cout << transitionPoint(a, n) << endl;
	}
	return 0;
}