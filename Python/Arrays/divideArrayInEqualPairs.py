# 2206. Divide Array Into Equal Pairs
# You are given an integer array nums consisting of 2 * n integers.

# You need to divide nums into n pairs such that:

# Each element belongs to exactly one pair.
# The elements present in a pair are equal.
# Return true if nums can be divided into n pairs, otherwise return false.

# Input: nums = [3,2,3,2,2,2]
# Output: true
# Input: nums = [1,2,3,4]
# Output: false

from typing import List

class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        freq = [0]*501
        for num in nums:
            freq[num] += 1
        
        for i in range(501):
            if freq[i] % 2 == 1:
                return False

        return True

nums = [3,2,3,2,2,2]
print(Solution().divideArray(nums))

nums = [1,2,3,4]
print(Solution().divideArray(nums))
