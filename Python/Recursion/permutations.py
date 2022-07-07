# Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
# Example 1:
# Input: nums = [1,2,3]
# Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
import copy 
class Solution(object):
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        ans = []
        permutation = []
        
        def getPermutations(pos):
            if pos == len(nums):
                ans.append(copy.copy(permutation))
                return
            for i in range(pos, len(nums)):
                nums[pos], nums[i] = nums[i], nums[pos]
                permutation.append(nums[pos])
                getPermutations(pos+1)
                permutation.pop()
                nums[pos], nums[i] = nums[i], nums[pos]
        getPermutations(0)

        return ans

s = Solution()
print(s.permute([1,2,3]))
