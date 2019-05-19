#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
    vector<int> array;
    for (int j = 0; j < n; j++)
    {
      int temp;
      cin >> temp;
      array.push_back(temp);
    }
    int x;
    cin >> x;
    int count;
    for (count = 0; array[count] <= x && count < array.size(); count++)
    {
    }
    cout << count << endl;
  }

  return 1;
}