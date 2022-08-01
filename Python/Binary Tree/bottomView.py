from queue import Queue
from collections import defaultdict
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def bottomView(self, root):
        ans = []
        if not root:
            return ans
        q = Queue()
        mapper = defaultdict(int)
        q.put([root,0])
        
        while not q.empty(): 
            curr, hd = q.get()
            mapper[hd] = curr.val
            
            if curr.left:
                q.put([curr.left, hd-1])
            if curr.right:
                q.put([curr.right, hd+1])
            
        for key in sorted(mapper):
            ans.append(mapper[key])
            
        return ans

#         1
#    2        3
#  4     5 6    7  

root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)
root.left.left = TreeNode(4)
root.left.right = TreeNode(5)
root.right.left = TreeNode(6)
root.right.right = TreeNode(7)
s = Solution()
print(s.bottomView(root))