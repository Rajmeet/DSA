# 2226. Maximum Candies Allocated to K Children

# You are given a 0-indexed integer array candies. Each element in the array denotes a pile of candies of size candies[i]. You can divide each pile into any number of sub piles, but you cannot merge two piles together.

# You are also given an integer k. You should allocate piles of candies to k children such that each child gets the same number of candies. Each child can take at most one pile of candies and some piles of candies may go unused.

# Return the maximum number of candies each child can get.


# Input: candies = [5,8,6], k = 3
# Output: 5

# Input: candies = [2,5], k = 11
# Output: 0

from typing import List


class Solution:
    def satisfiedChildren(self, candies, candyPerChild):
        total = 0
        for candy in candies:
            total += (candy//candyPerChild)
        return total

    def maximumCandies(self, candies: List[int], k: int) -> int:
        if sum(candies) < k:
            return 0
        
        l, r = 1, max(candies)
        ans = 0
        while l <= r:
            candyPerChild = (l+r)//2
            sc = self.satisfiedChildren(candies, candyPerChild)
            if sc >= k:
                ans = candyPerChild
                l = candyPerChild + 1
            else:
                r = candyPerChild - 1
        return ans


candies = [5,8,6]
k = 3
print(Solution().maximumCandies(candies, k))

candies = [2,5]
k = 11
print(Solution().maximumCandies(candies, k))
