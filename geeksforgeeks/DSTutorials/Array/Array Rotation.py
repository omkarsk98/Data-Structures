def RotateLeft(array, difference):
  """ 
  param array is the array to for modification
  param difference is the number of jumps to the left side 
  1. if difference is 2, add first 2 elements to a temporary array
  2. shift all the elements 2nd index onwards to left
  3. when all elements are shifted, overwrite remaining elements by the element of temp
  
  """
  temp = []
  for i in range(difference):
    temp.append(array[i])
  j = 0
  for i in range(len(array)):
    if i >= len(array)-difference:
      array[i] = temp[j]
      j+=1
    else:
      array[i] = array[i+difference]
  
def PrintArray(array):
  """ param array is the array to be printed """
  print(array)

array = [12, 56, 77, 78, 889, 789, 91]
difference = int(input("Shift Arry left by difference of:"))
# adjust difference if difference is more than the length of array
difference = difference % len(array)
print('Initial Array')
PrintArray(array)
#Rotate Array
RotateLeft(array, difference)

print('Array after rotation')
PrintArray(array)
