# Find all valid combinations of k numbers that sum up to n such that the following conditions are true:
# Only numbers 1 through 9 are used.
# Each number is used at most once.
# Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.
# Input: k = 3, n = 7
# Output: [[1,2,4]]

class Solution(object):
    def combinationSum3(self, k, n):
        """
        :type k: int
        :type n: int
        :rtype: List[List[int]]
        """
        ans = []
        combination = []
        
        def generateCombinations(i, total):
            if total == n:
                if len(combination) == k:
                    ans.append(combination[:])
                return
            
            if total > n:
                return
            
            if i > 9: return
            
            # include 
            combination.append(i)
            total += i
            generateCombinations(i+1, total)
            
            # exclude
            total -= i
            combination.pop()
            generateCombinations(i+1, total)
            
        generateCombinations(1, 0)
        return ans
s = Solution()
print(s.combinationSum3(3, 7))