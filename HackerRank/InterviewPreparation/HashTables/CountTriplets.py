arr = [1, 2, 2, 4]
arr = list(map(int, "1 3 9 9 27 81".split(" ")))
r = 2
r = 3


def countTriplets(arr, r):
    count = 0
    for i in set(arr):
        if i*r in arr and i*r*r in arr and arr.index(i) < arr.index(i*r) and arr.index(i*r) < arr.index(i*r*r):
            count += 1*arr.count(i)*arr.count(i*r)*arr.count(i*r*r)
            print("For", i, i*r, i*r*r, "with count:",count)
    return count


print(countTriplets(arr, r))
