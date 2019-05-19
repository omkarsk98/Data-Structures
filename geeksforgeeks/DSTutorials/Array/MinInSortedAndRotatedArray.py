def findMin(array, left, right):
    if left == right:
        return array[left]
    if left>right:
      return array[0]
    mid = int(left+right/2)
    if mid < right and array[mid] > array[mid+1]:
        return array[mid+1]
    if left < mid and array[mid-1] > array[mid]:
        return array[mid]
    if array[mid] < array[right]:
        return findMin(array, left, mid-1)
    return findMin(array, mid+1, right)


array = [5, 6, 1, 2, 3, 4]
print("Minimum value in", array, "is", findMin(array, 0, len(array)-1))

array = [1, 2, 3, 4]
print("Minimum value in", array, "is", findMin(array, 0, len(array)-1))

array = [1]
print("Minimum value in", array, "is", findMin(array, 0, len(array)-1))

array = [1, 2]
print("Minimum value in", array, "is", findMin(array, 0, len(array)-1))

array = [2, 1]
print("Minimum value in", array, "is", findMin(array, 0, len(array)-1))

array = [5, 6, 7, 2, 3, 4]
print("Minimum value in", array, "is", findMin(array, 0, len(array)-1))

array = [7, 8, 8, 8, 8, 8, 8, 8]
print("Minimum value in", array, "is", findMin(array, 0, len(array)-1))
