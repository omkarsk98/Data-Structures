def moveZeroesToRight(array, size):
    i = size-1
    for j in range(size):
        while array[i] == 0:
            i -= 1
        if array[j] == 0:
            array[j], array[i] = array[i], array[j]
            i -= 1
        if i == j:
            break
