''' import numpy as np
n = int(input())
arr = np.array(list(map(int, input().split(" "))))
weights = np.array(list(map(int, input().split(" "))))

wMean = np.average(arr, weights=weights)
# returns mean when weights arent supplied
print(wMean)
# code does not work with numpy on hackerrank
 '''

n = int(input())
arr = list(map(int, input().split(" ")))
weights = list(map(int, input().split(" ")))

wMean = 0
wSum = 0
for i in range(len(arr)):
  wMean += arr[i]*weights[i]
  wSum += weights[i]

wMean /= wSum
print(round(wMean,1))