def StepsWithThree(count):
    if count <= 1:
        return 1
    elif count == 2:
        return 2
    return Steps(count - 2) + Steps(count - 1)


def Steps(count):
    if count <= 1:
        return 1
    elif count == 2:
        return 2
    else:
        return StepsWithThree(count-3) + Steps(count - 2) + Steps(count - 1)


n = int(input())
res = Steps(n)
print(res % 1000000007)
