# Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.

def letterCombinations(digits):
    ans = []
    if not digits:
        return ans
    dic = {'2': 'abc', '3': 'def', '4': 'ghi', '5': 'jkl', '6': 'mno', '7': 'pqrs', '8': 'tuv', '9': 'wxyz'}
    def helper(digits, dic, i, temp, ans):
        if i >= len(digits):
            ans.append(temp)
            return
        curr = dic[digits[i]]
        for j in range(0, len(curr)):
            helper(digits, dic, i+1, temp+[curr[j]], ans)

        return
    helper(digits, dic, 0, [], ans)
    return ans

print(letterCombinations('23'))
