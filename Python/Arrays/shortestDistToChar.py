# 821. Shortest Distance to a Character

# Given a string s and a character c that occurs in s, return an array of integers answer 
# where answer.length == s.length and answer[i] is the distance from index i to the closest 
# occurrence of character c in s.

# The distance between two indices i and j is abs(i - j), where abs is the absolute value function.

# Input: s = "loveleetcode", c = "e"
# Output: [3,2,1,0,1,0,0,1,2,2,1,0]

# Input: s = "aaab", c = "b"
# Output: [3,2,1,0]

from typing import List

class Solution:
    def shortestToChar(self, s: str, c: str) -> List[int]:
        n = len(s)
        ans = [n] * n
        lastSeen = idx = 0
        while s[lastSeen] != c:
            lastSeen += 1
        
        idx = lastSeen
        while idx < n:
            if s[idx] == c:
                lastSeen = idx
            ans[idx] = (abs(idx-lastSeen))
            idx+=1
        idx-=1
        while idx >= 0:
            if s[idx] == c:
                lastSeen = idx
            ans[idx] = min(ans[idx], (abs(idx-lastSeen)))
            idx-=1
        
        return ans

s = "loveleetcode"
c = "e"
print(Solution().shortestToChar(s,c))

s = "aaab"
c = "b"
print(Solution().shortestToChar(s,c))
