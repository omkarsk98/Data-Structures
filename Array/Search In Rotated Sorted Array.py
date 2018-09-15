def binarySearch(array, left, right, key):
    if left > right:
        return -1  # error
    mid = int((left+right)/2)
    if key == array[mid]:
        return mid
    if key < array[mid]:
        return binarySearch(array, 0, mid-1, key)
    return binarySearch(array, mid+1, right, key)


def findPivot(array, left, right):
    if left > right:
        return -1  # error
    if left == right:
        return left
    mid = int((left+right)/2)
    if mid < right and array[mid] > array[mid+1]:
        return mid  # mid is pivot
    if mid > left and array[mid] < array[mid-1]:
        return mid-1  # mid-1 is pivot
    if array[left] >= array[mid]:
        return findPivot(array, left, mid-1)
    return findPivot(array, mid+1, right)


def pivotedBinarySearch(array, key, size):
    pivot = findPivot(array, 0, size)

    # if array is not rotated
    if pivot == -1:
        return binarySearch(array, 0, size-1, key)
    if array[pivot] == key:
        return pivot
    if array[0] <= key:
        return binarySearch(array, 0, pivot-1, key)
    return binarySearch(array, pivot+1, size, key)


array = [12, 56, 77, 78, 889, 10, 11]
# print("array size",len(array))
key = int(input("Search for:"))
found = pivotedBinarySearch(array, key, len(array)-1)
if found != -1:
    print(key, "found at postion", found+1)
else:
    print(key, "not found")
