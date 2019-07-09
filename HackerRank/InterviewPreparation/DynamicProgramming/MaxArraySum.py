#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the maxSubsetSum function below.


def maxSubsetSum(arr):
    dp = []
    dp.append(arr[0])
    dp.append(max(arr[:2]))
    for a in arr[2:]:
        dp.append(max([
            dp[-2]+a,
            a,
            dp[-1]
        ]))
    return dp[-1]


if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().rstrip().split()))
    res = maxSubsetSum(arr)
    print(res)
