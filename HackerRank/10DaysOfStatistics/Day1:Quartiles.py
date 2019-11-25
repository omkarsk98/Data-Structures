import statistics as stats
import math
n = int(input())
arr = list(map(int,input().split(" ")))
arr.sort()
q2 = stats.median(arr)
left = arr[:int(n/2)] if n%2 == 0 else arr[:math.floor(n/2)]
q1 = int(stats.median(left))
right = arr[int(n/2):] if n%2 == 0 else arr[math.ceil(n/2):]
q3 = int(stats.median(right))
print("%d\n%d\n%d"%(q1,q2,q3))
