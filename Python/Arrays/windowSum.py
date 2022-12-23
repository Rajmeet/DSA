# Given an array and a window size, find the sum of the window
# [1,2,3,4,5]
# k = 3
# sum = [5, 8, 12]

def windowSum(arr, k):
    ans = []
    for i in range(0, len(arr), k):
        temp = 0
        for k in range(k):
            temp += arr[i]
        ans.append(temp)

    return ans

print(windowSum([1,2,3,4,5], 3))