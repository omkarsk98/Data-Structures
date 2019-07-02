#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the commonChild function below.


def lcs(i, j, s1, s2):
    if i == len(s1) or j == len(s2):
        return 0
    elif s1[i] == s2[j]:
        return 1+lcs(i+1, j+1, s1, s2)
    else:
        return max(lcs(i+1, j, s1, s2), lcs(i, j+1, s1, s2))


def commonChild(s1, s2):
    m = len(s1) 
    n = len(s2)
  
    # declaring the array for storing the dp values 
    L = [[None]*(n + 1) for i in range(m + 1)] 
  
    for i in range(m + 1): 
        for j in range(n + 1): 
            if i == 0 or j == 0 : 
                L[i][j] = 0
            elif s1[i-1] == s2[j-1]: 
                L[i][j] = L[i-1][j-1]+1
            else: 
                L[i][j] = max(L[i-1][j], L[i][j-1]) 
  
    return L[m][n] 


if __name__ == '__main__':
    s1 = input()
    s2 = input()
    result = commonChild(s1, s2)
    print(result)
