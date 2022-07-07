# Combination Sum II
# Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.
# Input: candidates = [10,1,2,7,6,1,5], target = 8
# Output: [[1,1,6],[1,2,5],[1,7],[2,6]]

class Solution(object):
    def combinationSum2(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        candidates.sort()
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
            getCombinations(i+1, total)

            # exclude
            combination.pop()
            total -= candidates[i]
            while i+1 < len(candidates) and candidates[i] == candidates[i+1]: i+=1
            getCombinations(i+1, total)

        getCombinations(0, 0)
        return ans
s = Solution()
candidates = [10,1,2,7,6,1,5]
target = 8
print(s.combinationSum2(candidates, target))