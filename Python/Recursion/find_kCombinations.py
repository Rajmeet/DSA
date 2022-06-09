# given a number (n) generate all combinations of size k in the range 1-n 
# n = 4
# range = 1 2 3 4 => combinations: 12, 13, 14, 23, 24, 34
def kCombinations(n, k):
    ans = []
    def helper(n, k, i, temp):
        if k == 0:
            ans.append(temp)
            return
        if i > n:
            return
        # include
        helper(n, k-1, i+1, temp+[i])
        # exclude
        helper(n, k, i+1, temp)
    helper(n, k, 1, [])
    return ans

print(kCombinations(4, 2))