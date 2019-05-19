#code
T = int(input())
for i in range(T):
    n = int(input())
    reverse = 0
    while n>0:
        next = n%10
        n = int(n/10)
        reverse = reverse*10 + next
        # print("Reverse:",reverse," n:",n)
    print(reverse)