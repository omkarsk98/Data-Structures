#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter

# Complete the gameOfThrones function below.


def gameOfThrones(s):
    table = Counter()
    for i in s:
        table[i] += 1
    count = 0
    for i in table:
      if table[i]%2!=0:
        count+=1
      if count>1:
        break
    if count>1:
      return "NO"
    return "YES"


if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = gameOfThrones(s)
    print(result)

    # fptr.write(result + '\n')

    # fptr.close()
