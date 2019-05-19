def findMinSwaps(array, size, k):
    right = size-1
    left = 0
    count = 0
    while left < right:
        while array[left] < k:
            left += 1
        while array[right] > k:
            right -= 1
        array[left], array[right] = array[right], array[left]
        count += 1
        left += 1
        right -= 1

    return count


array = [2, 1, 5, 6, 3]
k = 3
print("Swaps required:",findMinSwaps(array, len(array), k))

array = [2, 7, 9, 5, 8, 7, 4]
k = 5
print("Swaps required:",findMinSwaps(array, len(array), k))
