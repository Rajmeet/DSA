# 75. Sort Colors

# Given an array nums with n objects colored red, white, or blue, sort them in-place 
# so that objects of the same color are adjacent, with the colors in the order 
# red, white, and blue.

# We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

# Input: nums = [2,0,2,1,1,0]
# Output: [0,0,1,1,2,2]

# Input: nums = [2,0,1]
# Output: [0,1,2]

from typing import List


class Solution:
    def sortColors(self, nums: List[int]) -> None:
        k = i = 0
        j = len(nums)-1
        while i <= j:
            if nums[i] == 0:
                nums[k], nums[i] = nums[i], nums[k]
                i+=1
                k+=1
            elif nums[i] == 2:
                nums[i], nums[j] = nums[j], nums[i]
                j-=1
            else:
                i+=1
        
        return nums

print(Solution().sortColors([2,0,2,1,1,0]))