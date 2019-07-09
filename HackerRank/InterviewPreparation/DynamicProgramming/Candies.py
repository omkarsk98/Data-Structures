#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter

# Complete the candies function below.


def candies(n, arr):
    counter = Counter()
    for i in range(len(arr)):
        counter[i+1] += 1
    if arr[0]>arr[i+1]:
        counter[i+1]+=1
    for i in range(1,n):


if __name__ == '__main__':
    n = int(input())
    arr = []
    for _ in range(n):
        arr_item = int(input())
        arr.append(arr_item)
    result = candies(n, arr)
    print(result)
