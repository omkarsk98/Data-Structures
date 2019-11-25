import math
import statistics as stats
n = int(input())
arr = list(map(int, input().split(" ")))
mean = stats.mean(arr)
stdDev = 0
for i in arr:
  stdDev += (i-mean)**2
stdDev/=n
stdDev = math.sqrt(stdDev)
print(round(stdDev,1))