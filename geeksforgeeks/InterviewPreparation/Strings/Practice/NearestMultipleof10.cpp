#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		double n, temp;
		cin >> n;
		temp = (int)n % 10;
		cout << "Temp as" << temp;
		int adjust = 0;
		if (temp <= 5)
			n -= temp;
		else
		{
			adjust = 10 - temp;
			n += adjust;
		}
		cout << n << endl;
	}
	return 0;
}