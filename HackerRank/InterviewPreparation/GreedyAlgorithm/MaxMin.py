#!/bin/python3
import math
import os
import random
import re
import sys

# Complete the maxMin function below.


def maxMin(k, arr):
    arr.sort()
    # print(arr)
    # print(len(arr)-k)
    mini = arr[len(arr)-1] - arr[0]
    for i in range(len(arr)-k+1):
        temp = arr[i+k-1]-arr[i]
        # print(temp)
        if temp<mini:
          mini = temp
          # print("mini changed to", mini)
    return mini


if __name__ == '__main__':
    n = int(input())
    k = int(input())
    arr = []
    for _ in range(n):
        arr_item = int(input())
        arr.append(arr_item)
    result = maxMin(k, arr)
    print(result)
