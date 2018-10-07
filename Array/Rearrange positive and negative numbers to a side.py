
def partition(array, size):
    i = -1
    # quick sort logic for partitioning array
    for j in range(size):
        if array[j] < 0:
            i += 1
            array[i], array[j] = array[j], array[i]
    # arrange positive and negative
    positive = i+1
    negative = -1 #0--> positive elements at odd places, 1--> positive elements at even places
    while negative < size-1:
        negative += 1
        array[negative], array[positive] = array[positive], array[negative]


array = [-1, 2, -3, 4, 5, 6, -7, 8, 9]
size = len(array)
partition(array, size)
print(array)
