# You are given an array ‘Arr’ of ‘N’ positive integers. You are also given a positive integer ‘target’.
# Your task is to find all unique combinations of the array ‘Arr’ whose sum is equal to ‘target’. Each number in ‘Arr’ may only be used once in the combination

def sumCom(arr, n, target):
    ans = []
    arr.sort()
    def helper(arr, n, target, i, total, temp):
        if total == target:
            ans.append(temp)
            return
        if i > n-1:
            return
        if total > target:
            return
        
        # include
        helper(arr, n, target, i+1, total+arr[i], temp+[arr[i]])
        # exclude
        while i < n-1 and arr[i] == arr[i+1]:
            i += 1
        
        helper(arr, n, target, i+1, total, temp)
    helper(arr, n, target, 0, 0, [])
    return ans

print(sumCom([1,2,3,1], 4, 5))
