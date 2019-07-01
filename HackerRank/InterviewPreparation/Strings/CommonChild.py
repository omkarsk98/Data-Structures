#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the commonChild function below.
def commonChild(s1, s2):
    count = 0
    for i in range(26):
        if chr(i+ord('A')) in s1 and chr(i+ord('A')) in s2:
            print(chr(i+ord('A')), "found in both")
            count+=1
    return count

if __name__ == '__main__':
    s1 = input()
    s2 = input()
    result = commonChild(s1, s2)
    print(result)
