/* 
Given an array A of size N. The task is to detect whether loop exists in given array or not. Each element of the array represents the index that can be reached from the current index in the array. If there is negative element, you cannot move anywhere. You need to check if loop exists for any element in the array.

Input: First line of input contains number of testcases T. For each testcase, there will be two lines, first of which contains size of array N and next line contains N integers.

Output: For each testcase, print "0" (without quotes) if loop doesn't exists, else print "1" (without quotes).

Constraints:
1 <= T <= 100
1 <= N <= 106
-106 <= A[i] <= 106

Example:
Input:
1
4
1 2 3 0

Output:
1

Explanation:
Testcase 1:
Elements and indices are as follows:
1 at 0 index (0 is connected to 1)
2 at 1 index (1 is connected to 2)
3 at 2 index (2 is connected to 3)
0 at 3 index (3 is connected to 0)
*/
#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  for (int tests = 0; tests < t; tests++)
  {
    int n;
    scanf("%d", &n);
    int array[n], visited[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &array[i]);
      visited[i] = 0;
    }
    int itr = array[0];
    if (itr < 0 || itr >= n)
    {
      printf("0\n");
      continue;
    }
    if (itr == 0 && n == 1)
    {
      printf("1\n");
      continue;
    }
    if (itr != 0 && n == 1)
    {
      printf("0\n");
      continue;
    }
    visited[itr] = 1;
    int loop = 1;
    while (itr != 0)
    {
      itr = array[itr];
      if (itr < 0 || itr >= n)
      {
        loop = 0;
        break;
      }
      if (visited[itr] == 1)
      {
        loop = 0;
        break;
      }
      visited[itr] = 1;
    }
    printf("%d\n", loop);
  }
  return 0;
}