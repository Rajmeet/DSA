# You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.
# Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) < 4:
            return max(nums)

        self.maxSum = 0
        def helper(i, n, currSum):
            if i > n:
                return
            currSum += nums[i]
            self.maxSum = max(self.maxSum, currSum)
            helper(i+2, n, currSum)

            currSum -= nums[i]
            helper(i+1, n, currSum)
        
        n = len(nums)
        helper(0, n-2, 0)
        helper(1, n-1, 0)
        return self.maxSum
    
print(Solution().rob([94,40,49,65,21,21,106,80,92,81,679,4,61,6,237,12,72,74,29,95,265,35,47,1,61,397,52,72,37,51,1,81,45,435,7,36,57,86,81,72]))

