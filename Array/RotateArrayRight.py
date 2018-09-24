def reverseArray(arr, start, end):
    while (start < end):
        arr[start], arr[end] = arr[end], arr[start]
        start = start + 1
        end = end - 1


# Function to right rotate arr
# of size n by d
def rightRotate(arr, d, n):
    reverseArray(arr, 0, n - 1)
    reverseArray(arr, 0, d - 1)
    reverseArray(arr, d, n - 1)


arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
n = len(arr)
k = 3
print("Initially:\n", arr)
rightRotate(arr, k, n)
print("After Rotation:\n", arr)
print()
#  I dont know anything about this. 
#  This code runs perfect but I dont know how.
#  Credit: Geeks for Geeks