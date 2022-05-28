# Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

# You may assume that each input would have exactly one solution, and you may not use the same element twice.

# You can return the answer in any order.

# Input: nums = [2,7,11,15], target = 9
# Output: [0,1]
# Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

# Time Complexity: O(N) 
# Space Complexity: O(N)
# where N is the len of the nums array.
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        d = {}
        for i in range(len(nums)):
            comp = target-nums[i]
            if nums[i] not in d:
                d[comp] = i
            else:
                return [d[nums[i]], i]


s = Solution()
nums = [2,7,11,15]
target = 9
print("The indices are for TC1 are", s.twoSum(nums,target))

nums = [3,2,4]
target = 6
print("The indices are for TC2 are", s.twoSum(nums,target))

nums = [3,3]
target = 6
print("The indices are for TC3 are", s.twoSum(nums,target))



