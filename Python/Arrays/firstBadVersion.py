# 278. First Bad Version

# You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

# Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

# You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.


def isBadVersion(n):
    if n == 4:
        return True
    return False

class Solution(object):
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        l = 0
        ans = 1
        while l <= n:
            mid = (l+n)//2
            if isBadVersion(mid):
                ans = mid
                n = mid - 1
            else:
                l = mid + 1
        
        return ans


print(Solution().firstBadVersion(5))