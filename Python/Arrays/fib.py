# 509. Fibonacci Number
# The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

# F(0) = 0, F(1) = 1
# F(n) = F(n - 1) + F(n - 2), for n > 1.

class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 0:
            return 0
        a = 0 
        b = 1
        cnt = 1
        while cnt != n:
            temp = a
            a = b
            b = temp + b 
                        
            cnt += 1
        
        return b

s = Solution()
print(s.fib(0))
print(s.fib(1))
print(s.fib(2))
print(s.fib(3))
print(s.fib(5))
