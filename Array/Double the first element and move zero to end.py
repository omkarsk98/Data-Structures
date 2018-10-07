import MoveAllZeroesToRight as ztoRight


def rearrange(array, size):
    for i in range(size-1):
        if array[i] == array[i+1]:
            array[i] = 2*array[i]
            array[i+1] = 0
    count = 0
    for i in range(0, size):
        if array[i] != 0:
            array[count] = array[i]
            count += 1
    while (count < size):
        array[count] = 0
        count += 1


array = [2, 2, 0, 4, 0, 8]
rearrange(array, len(array))
print(array)

array = [0, 2, 2, 2, 0, 6, 6, 0, 0, 8]
rearrange(array, len(array))
print(array)