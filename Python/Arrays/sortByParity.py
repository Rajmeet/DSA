# 905. Sort Array By Parity

# Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

# Return any array that satisfies this condition.

# Input: nums = [3,1,2,4]
# Output: [2,4,3,1]

# Input: nums = [0]
# Output: [0]


from typing import List

class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        n = len(nums)-1
        i = 0
        for j in range(len(nums)):
            if nums[j] % 2 == 0:
                nums[i], nums[j] = nums[j], nums[i]
                i+=1
        return nums

nums = [3,1,2,4]
print(Solution().sortArrayByParity(nums))

nums = [0]
print(Solution().sortArrayByParity(nums))