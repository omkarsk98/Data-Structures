""" 
Check if it is a triangle
"""
t = int(input())
while(t>0):
  a,b,c = [int(x) for x in input().split()]
  if a + b <= c or a + c <= b or b + c <= a:
      print("NO")
  else:
      print("YES")
  t-=1