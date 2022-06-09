def uniquePermutations(s):
    ans = set()
    def helper(s, pos):
        s = list(s)
        if pos >= len(s)-1:
            ans.add("".join(s))
            return ans

        for i in range(pos, len(s)):
            # do the swap
            s[i], s[pos] = s[pos], s[i]
            helper(s, pos+1)
            # undo the swap
            s[pos], s[i] = s[i], s[pos]
    helper(s, 0)
    return ans

print(uniquePermutations("acc"))
