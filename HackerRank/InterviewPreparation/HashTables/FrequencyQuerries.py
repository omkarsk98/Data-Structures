#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the freqQuery function below.
from collections import Counter


def freqQuery(queries):
    arr = []
    result = []
    freq = Counter()
    count = Counter()
    for i in queries:
        if i[0] == 1:
            arr.append(i[1])
            freq[i[1]] += 1
        if i[0] == 2 and i[1] in arr:
            arr.remove(i[1])
        if i[0] == 3:
            if arr.count(i[1]) == 0:
                result.append(0)
            else:
                result.append(1)
    return result


if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    queries = []

    for _ in range(q):
        queries.append(list(map(int, input().rstrip().split())))

    ans = freqQuery(queries)
    print(ans)
    # fptr.write('\n'.join(map(str, ans)))
    # fptr.write('\n')

    # fptr.close()
