# Combinations
# Given two integers n and k, return all possible combinations of k numbers out of the range [1, n].
# For example, given n = 4 and k = 2, a solution is:
# [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]

class Solution(object):
    def combine(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: List[List[int]]
        """
        ans = []
        combination = []
        def generateCombinations(i, k):
            if k == 0:  # can be done without k just len(combination)
                ans.append(combination[:])
                return
            if i > n: return
            # take the ith element
            combination.append(i)
            generateCombinations(i+1, k-1)
            # exclude the ith element
            combination.pop()
            generateCombinations(i+1, k)

        generateCombinations(1, k)
        return ans

s = Solution()
print(s.combine(4,2))