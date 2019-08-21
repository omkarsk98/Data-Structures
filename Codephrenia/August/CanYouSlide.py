""" 
Chirag is a very lazy student and doesn’t like to go to College for more than k consecutive days. He is weak in Maths and would like your help to maximize the number of lectures he can attend.

You are provided with two numbers n and k. n represent the total number of college working days and k represents the number of consecutive days Chirag wants to attend college. Then you are provided with a sequence of n numbers where each number represents the number of lectures in that day. Please help him maximize the number of lectures he can attend.

Please use suitable data type by predicting the maximum value of answers.

Input Format

First line will contain T, the number of test cases.
For each line of test case, there will be 2 lines of input.
First line of each test case will contain 2 space-separated integers N and K.
Second line of each test case will contain N space-separated integers, Ai as described in the problem statement.
Constraints

1 ≤ T ≤ 102
1 ≤ N ≤ 105
1 ≤ K ≤ N
1 ≤ Ai ≤ 105
Output Format

The output should contain T lines, each line containing a single integer, the answer to the problem.

Sample Input 0

2
5 1
1 2 5 3 4
5 2
5 4 3 2 1
Sample Output 0

5
9
Explanation 0

For the First Test Case, Chirag would like to go to College only for 1 day, hence we print the maximum from the given sequence which is 5. 
For the Second Test Case, Chirag would like to go to College for 2 days continuously. If he attends the College on the first and second days, he would be able to attend the maximum number of lectureswhich would be 5+4=9.
"""
t = int(input())
while(t>0):
  n, k = [int(x) for x in input().split()]
  arr = list(map(int,input().split(" ")))
  classes = 0
  while(k>0):
    classes+=max(arr)

    k-=1
  
  # print("k=",k)
  # for i in range(k):
  #   print(arr[i])
  #   classes+=arr[i]
  print(classes)
  t-=1