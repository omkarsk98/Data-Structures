import math
import os
import random
import re
import sys
from bisect import bisect_left, insort_left

# Complete the activityNotifications function below.
def activityNotifications(expenditure, d):
    mails = 0
        

if __name__ == '__main__':
    nd = input().split()
    n = int(nd[0])
    d = int(nd[1])
    expenditure = list(map(int, input().rstrip().split()))
    result = activityNotifications(expenditure, d)
    print(result)