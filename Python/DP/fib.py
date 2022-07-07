# The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
# F(0) = 0, F(1) = 1
# F(n) = F(n - 1) + F(n - 2), for n > 1.

# Input: n = 4
# Output: 3
# Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3

class Solution(object):        
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        dp={}
        # memoziation - O(N)/O(N)
        def memoFib(n):
            if n < 2:
                return n
            if n not in dp:
                dp[n] = memoFib(n-1) + memoFib(n-2)
            return dp[n]
        
        # tabulation - O(N)/O(N)
        def tabFib(n):
            if n < 2:
                return n
            dp = [-1]*(n+1)
            dp[0] = 0
            dp[1] = 1
            for i in range(2, n+1):
                dp[i] = dp[i-1] + dp[i-2]
            return dp[n]
        
        # tabulation + space optimization - O(N)/O(1)
        def tabSpaceFib(n):
            prev1 = 1   # denotes n-1
            prev2 = 0   # denotes n-2
            if n==0:
                return 0
            for i in range(2, n+1):
                curr = prev1 + prev2
                prev2 = prev1
                prev1 = curr
            
            return prev1

        return tabSpaceFib(n)
        