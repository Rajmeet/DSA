# 290. Word Pattern

# Given a pattern and a string s, find if s follows the same pattern.
# Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.

# Input: pattern = "abba", s = "dog cat cat dog"
# Output: true

# Input: pattern = "abba", s = "dog cat cat fish"
# Output: false

# Input: pattern = "aaaa", s = "dog cat cat dog"
# Output: false

class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        def approach1(s):
            s = s.split()
            return list(map(pattern.find, pattern)) == list(map(s.index, s))
        
        def approach2(s):
            s = s.split()
            return len(set(pattern)) == len(set(s)) == len(set(zip(pattern, s))) and len(pattern) == len(s)

        return approach1(s)

print(Solution().wordPattern("abba", "dog cat cat dog"))
print(Solution().wordPattern("abba", "dog cat cat fish"))
print(Solution().wordPattern("aaaa", "dog cat cat dog"))
