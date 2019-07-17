import math
import os
import random
import re
import sys

def fact(n):
    if n==0 or n==1:
        return 1
    return n*fact(n-1)

def extraLongFactorials(n):
    return fact(n)

if __name__ == '__main__':
    n = int(input())
    print(extraLongFactorials(n))
