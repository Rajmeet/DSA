# You are given an array of strings arr. A string s is formed by the concatenation of a subsequence of arr that has unique characters.
# Return the maximum possible length of s.

# Input: arr = ["un","iq","ue"]
# Output: 4
# Possible unique Concatenations: "uniq", "iq", "ique", "" and " ue".
# Explanation: The maximum length subsequence is "ique", so the answer is 4.

class Solution(object):
    def maxLength(self, arr):
        """
        :type arr: List[str]
        :rtype: int
        """
        self.maximum = 00

        def backtrack(i, currStr):
            if len(currStr) == len(set(currStr)):
                self.maximum = max(self.maximum, len(currStr))
            else:
                return

            for j in range(i, len(arr)):
                backtrack(j+1, currStr + arr[j])
        if arr: backtrack(0, '')
        return self.maximum

s = Solution()
print(s.maxLength(["un","iq","ue"]))
print(s.maxLength(["char","cat","car"]))