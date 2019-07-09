import math
import os
import random
import re
import sys
from collections import Counter

possible = False
table = set()


def hasLower(s):
    for i in s:
        if i.isupper():
            return False
    return True


def check(a, b):
    global possible
    global table
    if possible or len(a) < len(b):
        return
    if len(b) == 0:
        # print("Length found as 0", hex(possible))
        # global possible
        possible = hasLower(a)
        print("Resetting possible to", hex(possible))
        return
    if (a+"#"+b) in table:
        return
    table.add(a+"#"+b)
    fc = a[0]
    a = a[1:]
    if fc.islower():
        check(a, b)
    fc = fc.upper()
    if fc != b[0]:
        False
    b = b[1:]
    print("b sliced", b, len(b))
    check(a, b)


def abbreviation(a, b):
    table = set()
    possible = False
    a1 = ""
    s2 = ""
    res = check(a, b) or False
    print("possible", res)
    return "YES" if res == True else "NO"


if __name__ == '__main__':
    q = int(input())
    for q_itr in range(q):
        a = input()
        b = input()
        print(hex(possible))
        result = abbreviation(a, b)
        print(result)
