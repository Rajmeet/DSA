# Given an array find the first and the second maximum element
# [2,-3,4,1,6,-5,5,9,4]
# max = 9 
# second max = 6

def findMaximum(arr):
    max1 = max2 = arr[0]
    for i in range(1, len(arr)):
        if arr[i] > max1:
            max2 = max1
            max1 = arr[i]
        elif arr[i] > max2:
            max2 = arr[i]
    return max1, max2

arr =  [2,-3,4,1,6,-5,5,9,4]
print(findMaximum(arr))
            