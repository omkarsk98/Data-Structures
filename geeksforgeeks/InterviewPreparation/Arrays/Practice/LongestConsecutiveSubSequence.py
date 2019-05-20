def findLongestConseqSubseq(arr, n):
    array = set()
    addition = 1
    sums = []
    for element in arr:
        array.add(element)
    for element in array:
        if element+1 in array:
            addition+=1
        elif addition!=1:
            sums.append(addition)
            addition = 1
    # print(array)
    if len(sums)==0:
        return
    return max(sums)


if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        print(findLongestConseqSubseq(arr, n[0]))
