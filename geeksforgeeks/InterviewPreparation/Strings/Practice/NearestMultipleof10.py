t = int(input())
while(t > 0):
    n = int(input())
    temp = n % 10
    if temp < 5:
        n -= temp
    else:
        n += 10-temp
    print(n)
    t -= 1
