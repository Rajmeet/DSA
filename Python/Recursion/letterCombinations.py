# Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

# A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

# Input: digits = "23"
# Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

from copy import copy
class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        ans = []
        numToChar = {
            '2': 'abc',
            '3': 'def',
            '4': 'ghi',
            '5': 'jkl',
            '6': 'mno',
            '7': 'pqrs',
            '8': 'tuv',
            '9': 'wxyz'
        }
        
        def getCombinations(i, currStr):
            if len(currStr) == len(digits):
                ans.append(currStr)
                return
            
            for c in numToChar[digits[i]]:
                getCombinations(i+1, currStr + c)
        if digits: getCombinations(0, '')
        return ans
    
s = Solution()
print(s.letterCombinations("23"))