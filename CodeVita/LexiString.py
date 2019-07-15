from collections import Counter
t = int(input())
while t > 0:
    p = input()
    s = input()
    counts = Counter()
    for i in s:
      counts[i]+=1
    new = ""
    for i in p:
      if i in counts.keys():
        new+=i*counts[i]
    print(new)
    t -= 1
