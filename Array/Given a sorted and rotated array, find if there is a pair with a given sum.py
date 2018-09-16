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

def findPairInSortedArray(array, sum):
  max = findPivot(array, 0, len(array)-1)
  min = (max+1) % (len(array)-1)
  while min!=max:
    if array[min]+array[max] == sum:
      return True
    if array[min]+array[max] < sum:
      min = (min+1)%(len(array)-1)
    else:
      max = (max-1)%(len(array)-1)
  return False

array = [12, 42, 58, 92, 96, 2, 3, 8]
# print("Index of pivot",findPivot(array, 0, len(array)-1))
sumFound = findPairInSortedArray(array, 1000)
if sumFound:
  print("Sum Found")
else:
  print("Sum not Found")

# Time Complexity: O(n)