#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter
# Complete the isValid function below.
def isValid(s):
  s1 = Counter(s)
  values = list(s1.values())
  count = 0
  values.sort()
  if values.count(values[0]) == len(values) or (values.count(values[0]) == len(values) - 1 and values[-1] - values[-2] == 1) or (values.count(values[-1]) == len(values) - 1 and values[0] == 1):
    return "YES"
  return "NO"

if __name__ == '__main__':
    s = input()
    result = isValid(s)
    print(result)