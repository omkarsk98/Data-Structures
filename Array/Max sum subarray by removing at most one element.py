def maxSumSubarray(arr, n):
    sum = []
    temp_sum = 0
    for i in range(0, n):
        print("i=",i)
        temp_sum = 0
        for j in range(0, n - i):
            print("j=",j)
            temp_sum += arr[i+j]
            sum.append(temp_sum)
            print(sum)
            if j > 1:
                for k in range(1, j):
                    temp_mis_sum = temp_sum - arr[i+j-k]
                    sum.append(temp_mis_sum)
                print("In if")
                print(sum)
    return max(sum)


arr = [-2, -3, 4, -1, -2, 1, 5, -3]
print(maxSumSubarray(arr, len(arr)))
