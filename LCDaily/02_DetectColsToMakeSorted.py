# 944. Delete Columns to Make Sorted

# You are given an array of n strings strs, all of the same length.

# The strings can be arranged such that there is one on each line, making a grid. For example, 
# strs = ["abc", "bce", "cae"] can be arranged as:
# abc
# bce
# cae
# You want to delete the columns that are not sorted lexicographically. In the above example (0-indexed), columns 0 ('a', 'b', 'c') and 2 ('c', 'e', 'e') are sorted while column 1 ('b', 'c', 'a') is not, so you would delete column 1.

# Return the number of columns that you will delete.

# Input: strs = ["cba","daf","ghi"]
# Output: 1

# Input: strs = ["a","b"]
# Output: 0

# Input: strs = ["zyx","wvu","tsr"]
# Output: 3

from typing import List


class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        # Approach 1
        count = 0
        for i in range(len(strs[0])):
            for j in range(len(strs)-1):
                if strs[j][i] > strs[j+1][i]:
                    count += 1
                    break
        print(count)

        # Approach 2    
        for column in zip(*strs):
            if list(column) != sorted(column):
                count += 1
                
        return count

print(Solution().minDeletionSize(["cba","daf","ghi"]))
print(Solution().minDeletionSize(["a","b"]))
print(Solution().minDeletionSize(["zyx","wvu","tsr"]))