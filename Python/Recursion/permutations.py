def permutations(s):
    ans = []
    def helper(s, pos):
        s = list(s)
        if pos == len(s):
            ans.append(''.join(s))
            return
        for i in range(pos, len(s)):
            s[pos], s[i] = s[i], s[pos]
            helper(s, pos+1)
            s[pos], s[i] = s[i], s[pos]
    helper(s, 0)
    return ans

print(permutations('aab'))
