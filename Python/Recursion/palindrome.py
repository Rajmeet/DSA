def palindrome(s):
    def helper(s, i, j):
        if i >= j:
            return True
        if s[i] != s[j]:
            return False
        return helper(s, i+1, j-1)
    return helper(s, 0, len(s)-1)

print(palindrome("RADAR"))
print(palindrome("CAT"))
