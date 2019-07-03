import math
import os
import random
import re
import sys

# Complete the maximumPerimeterTriangle function below.
def maximumPerimeterTriangle(sticks):
    sticks.sort()
    i = len(sticks)-3
    while sticks[i]+sticks[i+1]<=sticks[i+2]:
      i-=1
    
    if i>=0:
      print(sticks[i], sticks[i+1], sticks[i+2])
    else: 
      print(-1)
    return

if __name__ == '__main__':
    n = int(input())
    sticks = list(map(int, input().rstrip().split()))
    result = maximumPerimeterTriangle(sticks)
    