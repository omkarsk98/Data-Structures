import statistics
from scipy import stats

n = int(input())
arr = list(map(int, input().split()))
mean = statistics.mean(arr)
median = statistics.median(arr)
mode = stats.mode(arr)[0][0]

''' 
mean and median can also be calculated as np.mean() and np.median()
'''
print(mean)
print(median)
print(mode)