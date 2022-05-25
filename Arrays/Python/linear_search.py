def linearSearch(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return True
    return False


print(linearSearch([1,2,3,4,5],5))
print(linearSearch([1,2,4,5],3))


