import math
import os
import random
import re
import sys

def climbingLeaderboard(scores, alice):
    scores = list(set(scores))
    scores.sort(reverse=True)
    j = len(scores)-1
    ranks = []
    for i in alice:
        if i not in scores:
            while scores[j] < i and j >= 0:
                j -= 1
            scores.insert(j+1, i)
            ranks.append(scores.index(i)+1)
        else:
            temp = scores.index(i)+1
            ranks.append(temp)
            j = temp
    return ranks


if __name__ == '__main__':
    scores_count = int(input())
    scores = list(map(int, input().rstrip().split()))
    alice_count = int(input())
    alice = list(map(int, input().rstrip().split()))
    result = climbingLeaderboard(scores, alice)
    for i in result:
        print(i)
