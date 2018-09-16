def findMaxFromArray(array):
    """ returns maximum value in the given array """
    return max(array)


def Rotate(array, size):
    """ Rotates the array to right by one place """
    temp = array[size-1]
    for i in range(size):
        array[size-1-i] = array[size-2-i]
    array[size-1-i] = temp


def findMaxSum(array):
    """ Rotate array so that max value comes at highest index so that sum is maximum """
    size = len(array)
    max = findMaxFromArray(array)  # maximum value from the array
    while array.index(max) != size-1:
        Rotate(array, len(array))

    sum = 0
    """ Loop to calculate sum """
    for i in range(len(array)):
        sum = sum + (i*array[i])
    return sum


array = [1, 20, 2, 10]
print("Maximum possible sum is", findMaxSum(array))

""" time complexity-->O(n) """