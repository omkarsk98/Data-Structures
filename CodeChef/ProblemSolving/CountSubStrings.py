t = int(input())
while t > 0:
    n = int(input())
    string = input()
    count = string.count("1")
    print(int((count*(count+1))/2))
    t -= 1
