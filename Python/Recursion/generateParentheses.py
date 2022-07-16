# 22. Generate Parentheses
# Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
# Input: n = 3
# Output: ["((()))","(()())","(())()","()(())","()()()"]

class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        ans = []
        stack = []

        def backtrack(openN, closeN):
            if openN == closeN == n:
                ans.append("".join(stack))
                return
            
            if openN < n:
                stack.append('(')
                backtrack(openN+1, closeN)
                stack.pop()
            
            if openN > closeN:
                stack.append(')')
                backtrack(openN, closeN+1)
                stack.pop()
        backtrack(0,0)
        return ans
print(Solution().generateParenthesis(3))