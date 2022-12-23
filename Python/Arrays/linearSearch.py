# Check if an element exists in the array
def findElement(arr, x):
    for ele in arr:
        if ele == x:
            return True
    return False