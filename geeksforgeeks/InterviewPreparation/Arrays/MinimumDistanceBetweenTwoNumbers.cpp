/* 
  Input Format:
  The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. Each test case consists of three lines. The first line of each test case contains an integer N denoting size array. Then in the next line are N space separated values of the array A. The last line of each test case contains two integers  x and y.

  Output Format:
  For each test case, print the required answer .

  Your Task:
  Your task is to complete the function minDist which returns  an integer denoting the minimum distance between two integers x and y in the array. If no such distance is possible then return -1.

  Constraints:
  1 <= T <= 100
  1 <= N <= 105
  1 <= A, x, y <= 105

  Example:
  Input:
  2
  2
  1 2
  1 2
  7
  86 39 90 67 84 66 62 
  42 12

  Output:
  1
  -1

  Explanation:
  Testcase1: x = 1 and y = 2. minDistance between x and y is 1.
  Testcase2: x = 42 and y = 12. We return -1 as the x and y don't exist in the array.
*/

#include <stdio.h>
#include <iostream>
#include <stdlib.h> // for abs()
#include <limits.h> // for INT_MAX
using namespace std;

void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}
long long minDist(long long arr[], long long n, long long x, long long y);
int main()
{
  long long t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++)
      cin >> a[i];
    long long x, y;
    cin >> x >> y;
    cout << minDist(a, n, x, y) << endl;
  }
  return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function below*/
long long minDist(long long array[], long long n, long long x, long long y)
{
  //add code here.
  int xCount = 0, yCount = 0;
  for (int i = 0; i < n; i++)
  {
    if (array[i] == x)
      xCount++;
    if (array[i] == y)
      yCount++;
  }
  int xIndices[xCount], yIndices[yCount];
  int k = 0;
  for (int j = 0; j < n || k < xCount; j++)
  {
    if (array[j] == x)
    {
      xIndices[k] = j;
      k++;
    }
  }
  k=0;
  for (int j = 0; j < n || k < yCount; j++)
  {
    if (array[j] == y)
    {
      yIndices[k] = j;
      k++;
    }
  }
  int min = 10000;
  for (int j = 0; j < xCount; j++)
  {
    for (int k = 0; k < yCount; k++)
    {
      int distance = xIndices[j] - yIndices[k];
      if (distance < 0)
        distance *= -1;
      if (distance < min)
        min = distance;
    }
  }
  if (min == 10000)
    return -1;
  return min;
}