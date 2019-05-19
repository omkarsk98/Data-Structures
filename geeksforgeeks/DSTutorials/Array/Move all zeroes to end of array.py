# def moveZeroesToRight(array, size):
#     i = size-1
#     for j in range(size):
#         while array[i] == 0:
#             i -= 1
#         if array[j] == 0:
#             array[j], array[i] = array[i], array[j]
#             i -= 1
#         if i == j:
#             break

import MoveAllZeroesToRight as ztoRight


array = [1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0]
ztoRight.moveZeroesToRight(array, len(array))
print("After shifting all arrays to right")
print(array)
