#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the luckBalance function below.
def luckBalance(k, contests):
  arr = []
  print(contests)
  return 1

if __name__ == '__main__':
    nk = input().split()
    n = int(nk[0])
    k = int(nk[1])
    contests = []
    for _ in range(n):
        contests.append(list(map(int, input().rstrip().split())))
    result = luckBalance(k, contests)
    print(result)
