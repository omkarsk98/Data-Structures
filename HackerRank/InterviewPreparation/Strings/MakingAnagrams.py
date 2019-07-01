#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter
# Complete the makeAnagram function below.
def makeAnagram(a, b):
  s = Counter()
  for i in a:
    s[i]+=1
  for i in b:
    s[i]-=1
  count = 0
  for i in s:
    count+=abs(s[i])
  return count

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = input()

    b = input()

    res = makeAnagram(a, b)
    print(res)
    # fptr.write(str(res) + '\n')

    # fptr.close()
