import math
import os
import random
import re
import sys
from collections import Counter

def equalizeArray(arr):
    counts = Counter(arr)
    return len(arr)-max(counts.values())

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().rstrip().split()))
    result = equalizeArray(arr)
    print(result)