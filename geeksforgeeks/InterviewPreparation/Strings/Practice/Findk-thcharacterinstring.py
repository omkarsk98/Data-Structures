def convertToBinary(num):
    binary = ""
    while num > 0:
        temp = num % 2
        binary = binary + str(temp)
        num /= 2
        num = int(num)
    return binary[::-1]


tests = int(input())
while tests > 0:
    tests -= 1
    m, k, n = [int(x) for x in input().split()]
    s = convertToBinary(m)
    s1 = ""
    for x in range(0, n):
        for y in s:
            if (y == '1'):
                s1 += "10"
            else:
                s1 += "01"
        s = s1
        s1 = ""

    print(s[k])
