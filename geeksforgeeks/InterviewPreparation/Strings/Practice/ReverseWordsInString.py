t = int(input())
while t > 0:
    t -= 1
    string = list(map(str, input().split(".")))
    string = string[::-1]
    output = ""
    for i in range(len(string)):
        if(i < len(string)-1):
            output += string[i]+"."
        else:
            output += string[i]
    print(output)
