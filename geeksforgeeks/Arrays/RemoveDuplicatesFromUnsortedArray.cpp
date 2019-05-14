#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
  //code
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
    int array[n];
    unordered_set<int> uniques;
    for (int j = 0; j < n; j++)
    {
      cin >> array[j];
      uniques.insert(array[j]);
    }
    for (auto it = uniques.begin(); it != uniques.end(); it++)
      cout << *it << " ";
    cout << endl;
  }
  return 0;
}