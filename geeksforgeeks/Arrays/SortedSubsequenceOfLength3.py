""" 
  Given an array A of N integers, Your task is to complete the function find3Numbers which finds any 3 elements in it such that A[i] < A[j] < A[k] and i < j < k. You need to return them as a vector, if no such element is present then return the empty vector of size 0.

  Input:
  The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. The first line of each test case contains an integer N denoting the size of the array A in the next line are N space separated values of the array A.

  Output:
  For each test case in a new line output will be 1 if the sub-sequence returned by the function is present in array A else 0.

  Constraints:
  1 <= T <= 100
  1 <= N <= 105
  1 <= A[ ] <= 106

  Example:
  Input:
  2
  5
  1 2 1 1 3
  3
  1 1 3
  Output:
  1
  0

  Explanation:
  There are 2 test cases
  For first test case
  a sub-sequence 1 2 3 exist 
  For second test case
  no such sub-sequence exist
"""

def find3number(n, A):
    # Code here
    max = n-1 # Index of maximum element from right side 
    min = 0 # Index of minimum element from left side 
  
    smaller = [0]*10000
    smaller[0] = -1
    for i in range(1,n): 
        if (arr[i] <= arr[min]): 
            min = i 
            smaller[i] = -1
        else: 
            smaller[i] = min
  
    greater = [0]*10000
    greater[n-1] = -1
  
    for i in range(n-2,-1,-1): 
        if (arr[i] >= arr[max]): 
            max = i 
            greater[i] = -1
        else: 
            greater[i] = max

    for i in range(0,n): 
        if smaller[i] != -1 and greater[i] != -1: 
            return arr[smaller[i]], arr[i], arr[greater[i]] 
    return []

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        lis = find3number(n, arr)
        if len(lis) != 0:
            print(1)
        else:
            print(0)
