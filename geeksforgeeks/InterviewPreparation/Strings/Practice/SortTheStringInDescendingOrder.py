t = int(input())
for i in range(t):
    string = input()
    string = list(string)
    string.sort()
    for element in string[::-1]:
        print(element, end="")
    print()
