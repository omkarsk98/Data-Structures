t = int(input())
while(t > 0):
    t -= 1
    n = int(input())
    nuts = list(map(str,input().split()))
    bolts = list(map(str,input().split()))
    pairs = {}
    for i in nuts:
      pairs[i] = None
    for i in bolts:
      pairs[i] = i
    for key, value in pairs.items():
      print(key, end=" ")
    print()
    for key, value in pairs.items():
      print(value, end=" ")
    print()