def findSubsetsThatSumToK(arr, n, k) :
    # Write your code here.
    ans = []
    subset = []
    n = len(arr)
    def backtrack(i, currSum):
        if i == n:
            if currSum == k and len(subset) != 0:
                ans.append(subset[:])
            return 
        # include
        currSum += arr[i]
        subset.append(arr[i])
        backtrack(i+1, currSum)

        currSum -= arr[i]
        subset.pop()
        backtrack(i+1, currSum)        
    backtrack(0, 0)
    return ans  

print(findSubsetsThatSumToK([5, -1, 8, 2, 7, 0], 6, 7))