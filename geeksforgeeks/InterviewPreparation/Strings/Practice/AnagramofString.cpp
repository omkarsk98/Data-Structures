#include <bits/stdc++.h>
using namespace std;
const int CHARS = 26;
int remAnagram(string str1, string str2)
{
  char count1[26] = {0}, count2[26] = {0};
  for (int i = 0; str1[i] != '\0'; i++)
    count1[str1[i] - 'a']++;
  for (int i = 0; str2[i] != '\0'; i++)
    count2[str2[i] - 'a']++;
  int result = 0;
  for (int i = 0; i < 26; i++)
  {
    int temp = count1[i] - count2[i];
    temp = temp < 0 ? temp * -1 : temp;
    result += temp;
  }
  return result;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string str1, str2;
    cin >> str1 >> str2;
    cout << remAnagram(str1, str2);
    cout << endl;
  }
  return 0;
}