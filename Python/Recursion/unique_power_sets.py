def UniquePowerSets(s):
    ans = []
    def helper(s, i, arr):
        if i > len(s)-1:
            ans.append(arr)
            return ans

        # include the element
        helper(s, i+1, arr+[s[i]])

        # exlcude the element until we don't get the same thing
        while i + 1 < len(s) and s[i] == s[i+1]: i+=1
        helper(s, i+1, arr)

    helper(s, 0, [])
    return ans

print(UniquePowerSets('acc'))
