def reverse(arr):
    def helper(arr, i, j):
        if i >= j:
            return arr 
        arr[i], arr[j] = arr[j], arr[i]
        return helper(arr, i+1, j-1)
    return helper(arr,0,len(arr)-1)

print(reverse([]))
print(reverse([1,2,3]))
print(reverse([10,2,5,7,1]))
    