import math
import os
import random
import re
import sys

def jimOrders(orders):
    serve_time = []
    for i, v in enumerate(orders):
        serve_time.append([v[0]+v[1], i+1])
    serve_time.sort()
    order = [x[1] for x in serve_time]
    return order


if __name__ == '__main__':
    n = int(input())
    orders = []
    for _ in range(n):
        orders.append(list(map(int, input().rstrip().split())))
    result = jimOrders(orders)
    print((' '.join(map(str, result))))
