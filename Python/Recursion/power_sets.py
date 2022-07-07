import copy
def power_sets(arr):
    ans = []
    subset = []
    n = len(arr) - 1
    def helper(i):
        if i > n:
            ans.append(subset[:])
            return 
        # include
        subset.append(arr[i])
        helper(i+1)

        # exclude
        subset.pop()
        helper(i+1)
    helper(0)
    return ans

print(power_sets([1,2,3]))