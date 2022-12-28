# 69. Sqrt(x)

# Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

# You must not use any built-in exponent function or operator.

# For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

class Solution:
    def mySqrt(self, x: int) -> int:
        if x <= 1:
            return x
        
        l = 0 
        r = x
        ans = l
        while l <= r:
            mid = (l+r)//2 
            square = mid * mid
            if square <= x:
                ans = mid
                l = mid + 1
            elif square > mid:
                r = mid - 1

        return ans

print(Solution().mySqrt(4))
print(Solution().mySqrt(8))
print(Solution().mySqrt(11))
print(Solution().mySqrt(2**23))
