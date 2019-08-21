""" 
Given 2 strings A and B, and a character X. You have to insert string B into string A in such a way that after you have performed the join operation, the resulting string contains a substring that contains only character X of length len. Find the maximum possible value of len. 
You are allowed to split the string A at index any you want and insert string B. It is not necessary to split the string A. Please note that you are not allowed to split the string B.

- NOTE: A substring is a contiguous sequence of characters within a string. The list of all substrings of the string "apple" would be "apple", "appl", "pple", "app", "ppl", "ple", "ap", "pp", "pl", "le", "a", "p", "l", "e", "".

Input Format

The first line of input contains T, the number of test cases.
For each test case, there will be 3 separate lines. The first line will contain String A, the second line will contain String B and the third line will contain a single character X
Constraints

1 ≤ T ≤ 103
1 ≤ length of String A,B ≤ 104
Both String A & B and Character X will contain lower case alphabets.
Output Format

For each Test Case print a single line denoting len which is the maximum length of the substring containing only character X
Sample Input 0

5
omvdvanhh
hveohvykr
h
dserkta
uxhukbl
c
nvfpcbgsl
fpbrofonl
p
hkqxm
ofnmh
m
oujotoie
eeexmiee
e
Sample Output 0

3
0
1
1
4
Explanation 0

For the First Test Case, we do not split the first string and join the second string at the end of the first string, which gives us a substring containing only 'h' having length 3.
For the second test case, the character 'c' is not present in any of the strings, hence the answer is 0.
"""
t = int(input())
while(t>0):
  a = input()
  b = input()
  c = input()
  # print(a,b,c)
  index = a.rfind(c)
  res = a[0:index+1] + b + a[index+1:]
  count = 0
  counting = False
  for i in range(len(res)):
    if res[i]==c:
      count+=1
      counting = True
    if res[i]!=c and counting:
      break
  print(count)
  t-=1