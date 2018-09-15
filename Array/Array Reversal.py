def reverseArray(array):
  for i in range(int(len(array)/2)):
    #array[i], array[len(array)-i-1] = array[len(array)-i-1], array[i]
    temp = array[i]
    array[i] = array[len(array)-i-1]
    array[len(array)-i-1] = temp

array = [12, 56, 77, 78, 889, 789, 91]
print("Initial array\n",array)
reverseArray(array)
print("Reversed array\n",array)