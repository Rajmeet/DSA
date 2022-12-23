# Given an array find the sum for a range of numbers a and b
# [1,2,3,4,5]
# a = 1,  b = 3
# sum = 2+3+4= 9

def rangeSum(arr, a, b):
    # Create a prefix array that will store the sum of each element until n
    prefixArr = [arr[0]]
    
    for i in range(1, len(arr)):
        prefixArr.append(prefixArr[-1] + arr[i])
    
    return prefixArr[b] - prefixArr[a-1]

arr = [5,2,1,3,4,0,8,7,2]
print(rangeSum(arr, 4, 7))