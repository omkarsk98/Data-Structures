import statistics as stats
import math
n = int(input())
x = list(map(int,input().split(" ")))
freq = list(map(int,input().split(" ")))
arr = []
for i in range(n):
  for j in range(freq[i]):
    arr.append(x[i])
arr.sort()
n = len(arr)
q2 = stats.median(arr)
left = arr[:n//2] if n%2 == 0 else arr[:math.floor(n/2)]
q1 = stats.median(left)
right = arr[n//2:] if n%2 == 0 else arr[math.ceil(n/2):]
q3 = stats.median(right)
iqr = float(q3 - q1)
print(round(iqr,1))