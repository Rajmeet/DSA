# 1480. Running Sum of 1d Array

# Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
# Return the running sum of nums.

#TC1
# Input: nums = [1,2,3,4]
# Output: [1,3,6,10]
# Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

#TC2
# Input: nums = [1,1,1,1,1]
# Output: [1,2,3,4,5]
# Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].

#TC3
# Input: nums = [3,1,2,10,1]
# Output: [3,4,6,16,17]

# O(1) Space O(N) Time
class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        runSum = 0
        for i in range(len(nums)):
            runSum += nums[i]
            nums[i] = runSum
        return nums


s = Solution()
nums = [1,2,3,4]
print("The indices are for TC1 are", s.runningSum(nums))

nums = [1,1,1,1,1]
print("The indices are for TC2 are", s.runningSum(nums))

nums = [3,1,2,10,1]
print("The indices are for TC3 are", s.runningSum(nums))
