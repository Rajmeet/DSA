# You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
# Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.
# Input: nums = [1,2,3,1]
# Output: 4


class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        self.maxSum = 0

        def backtrack(i, currSum):
            if i >= len(nums):
                self.maxSum = max(self.maxSum, currSum)
                return

            # include
            currSum += nums[i]
            backtrack(i+2, currSum)

            # exclude
            currSum -= nums[i]
            backtrack(i+1, currSum)
        backtrack(0,0)
        return self.maxSum

s = Solution()
print(s.rob([1,2,3,1]))

print(s.rob([183,219,57,193,94,233,202,154,65,240,97,234,100,249,186,66,90,238,168,128,177,235,50,81,185,165,217,207,88,80,112,78,135,62,228,247,211]))