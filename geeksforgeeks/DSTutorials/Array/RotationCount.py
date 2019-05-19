def findRotationCount(array):
  size = len(array)
  for i in range(size-1):
    if array[i+1]<array[i]:
      return i+1
  return 0

array = [7, 9, 11, 12, 5]
count = findRotationCount(array)
if count!=0:
  print("Array should be rotated",count,"clockwise times to arrange it in sorted manner")
else:
  print("Array is already in sorted manner.")