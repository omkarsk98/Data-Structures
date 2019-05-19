array = [2, 4, 8, 0]
maxHammingDistance = 0
size = len(array)
index = 0

for k in range(size):
    start = k
    j = start
    count = 0
    for i in range(size):
        if array[i] != array[j]:
            count += 1
        j = (j+1) % size
    if count > maxHammingDistance:
        maxHammingDistance = count
        index = k

print("Maximum hamming distance =",maxHammingDistance)
print("One possiblility of the maximum hamming distance is when array is rotated left",index,"times. i.e.")
for i in range(size):
  print(array[(i+index)%size],end=" ")
print()