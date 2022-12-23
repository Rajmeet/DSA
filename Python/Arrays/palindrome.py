# Check if the given array is palindrome or not
def checkPalindrome(arr):
    i = 0
    j = len(arr) - 1
    while i <= j:
        if arr[i] != arr[j]:
            return False
        i += 1
        j -= 1
    return True

print(checkPalindrome("racecar"))
print(checkPalindrome("lmao"))
print(checkPalindrome("level"))
