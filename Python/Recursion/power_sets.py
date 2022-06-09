def power_sets(arr):
    ans = []
    def helper(i, arr, temp):
        if i >= len(arr):
            ans.append(temp)
            return
        # include
        helper(i+1, arr, temp+[arr[i]])
        # exclude 
        helper(i+1, arr, temp)
    helper(0, arr, [])
    return ans

print(power_sets([1,2,3]))