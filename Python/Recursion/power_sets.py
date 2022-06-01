def power_sets(s):
    ans = []
    def helper(s, i, temp=[]):
        if i > len(s)-1:
            if temp not in ans:
                ans.append(temp)
            return ans            

        # including
        helper(s, i+1, temp + [s[i]])

        # exlcuding
        helper(s, i+1, temp)
    helper(s, 0, [])
    return ans

print(power_sets('122'))        