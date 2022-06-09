# You are given an array/list ARR of N distinct positive integers. You are also given a non-negative integer B.
# Your task is to find all unique combinations in the array whose sum is equal to B. A number can be chosen any number of times from array/list ARR.

# Let the array ARR be [1, 2, 3] and B = 5. Then all possible valid combinations are-

# (1, 1, 1, 1, 1)
# (1, 1, 1, 2)
# (1, 1, 3)
# (1, 2, 2)
# (2, 3)

def combSum(arr, total):    
    ans = []
    def helper(i, total, currSum, arr, temp):
        if currSum == total:
            ans.append(temp)
            return 
        if i > len(arr)-1:
            return
        # include
        helper(i, total, currSum + i, arr, temp+[arr[i]])

        # exclude
        helper(i+1, total, currSum + i, arr, temp)
    helper(0, total, 0, arr, [])
    return ans

print(combSum([1,2,3], 5))