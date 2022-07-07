# Combination Sum
# Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.
# Input: candidates = [2,3,6,7], target = 7
# Output: [[2,2,3],[7]]

from math import comb


class Solution(object):
    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        ans = []
        combination = []

        def getCombinations(i, total):
            if total == target:
                ans.append(combination[:])
                return 
                
            if total > target: return
            if i >= len(candidates): return

            # include
            total += candidates[i]
            combination.append(candidates[i])
            getCombinations(i, total)

            # exclude
            combination.pop()
            total -= candidates[i]
            getCombinations(i+1, total)

        getCombinations(0, 0)
        return ans

s = Solution()
candidates = [2,3,6,7]
target = 7
print(s.combinationSum(candidates, target))