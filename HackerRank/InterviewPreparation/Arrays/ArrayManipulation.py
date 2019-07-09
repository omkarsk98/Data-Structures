import math
import os
import random
import re
import sys

# Complete the arrayManipulation function below.
def arrayManipulation(n, queries):
    temp = [0]*(n+1)
    for i in queries:
        temp[i[0]-1]+= i[2]
        temp[i[1]]+= -i[2]
        # print(temp)
    # print(temp)
    for i in range(1,n):
        temp[i]+=temp[i-1]
    # print(temp)
    return max(temp)

if __name__ == '__main__':
    nm = input().split()
    n = int(nm[0])
    m = int(nm[1])
    queries = []
    for _ in range(m):
        queries.append(list(map(int, input().rstrip().split())))
    result = arrayManipulation(n, queries)
    print(result)