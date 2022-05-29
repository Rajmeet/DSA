# 283. Move Zeroes

# Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
# Note that you must do this in-place without making a copy of the array.

# TC1
# Input: nums = [0,1,0,3,12]
# Output: [1,3,12,0,0]

# TC2
# Input: nums = [0]
# Output: [0]


class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        l = 0
        r = 1
        while r < len(nums):
            if nums[l] == 0 and nums[r] == 0:
                r += 1

            elif nums[l] == 0:
                nums[l], nums[r] = nums[r], nums[l]
                l += 1
                r += 1 
            
        return nums

s = Solution()
nums = [0,1,0,3,12]
print("The indices are for TC1 are", s.moveZeroes(nums))

nums = [0]
print("The indices are for TC2 are", s.moveZeroes(nums))

nums = [4,2,0,1,2,5]
print("The indices are for TC3 are", s.moveZeroes(nums))
