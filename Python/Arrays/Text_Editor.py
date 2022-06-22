# https://binarysearch.com/problems/Text-Editor

# Given a string s representing characters typed into an editor, with "<-" representing a backspace, return the current state of the editor.'

# TC1
# Input: s = "abc<-z"
# Output: "abz"
# 'c' has be deleted by the Backspace


# TC2
# Input: s = "<-x<-z<-"
# Output: ""
# All characters are deleted.

# TC3
# Input: s = "<<<-<-"
# Output: ""
# All characters are deleted.

class Solution(object):
    def solve(self, s):
        updated = s.replace('<-', ' ')
        lst = []
        for i in updated:
            if i != ' ':
                lst.append(i)
            else:
                if len(lst) != 0:
                    lst.pop()
        return ''.join(lst)
    
s = Solution()

st = "abc<-z"
print("The resultant string of TC1 is", s.moveZeroes(st))

st = "<-x<-z<-"
print("The resultant string of TC2 is", s.moveZeroes(st))

st = "<<<-<-"
print("The resultant string of TC3 is", s.moveZeroes(st))
