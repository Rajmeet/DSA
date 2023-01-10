# 100. Same Tree

# Given the roots of two binary trees p and q, write a function to check if they are the same or not.
# Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

# Input: p = [1,2,3], q = [1,2,3]
# Output: true

# Input: p = [1,2], q = [1,null,2]
# Output: false

# Input: p = [1,2,1], q = [1,1,2]
# Output: false


# Definition for a binary tree node.
from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if p is None and q is None:
            return True
        
        if p is None and q is not None:
            return False
        if p is not None and q is None:
            return False
        if p.val != q.val:
            return False        

        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
        

root1 = TreeNode(1)
root1.left = TreeNode(2)
root1.right = TreeNode(3)

root2 = TreeNode(1)
root2.left = TreeNode(2)
root2.right = TreeNode(3)

print(Solution().isSameTree(root1, root2))


root1 = TreeNode(1)
root1.left = TreeNode(2)
root2 = TreeNode(1)
root2.right = TreeNode(2)

print(Solution().isSameTree(root1, root2))

root1 = TreeNode(1)
root1.left = TreeNode(2)
root1.right =  TreeNode(1)

root2 = TreeNode(1)
root2.left = TreeNode(1)
root2.right = TreeNode(2)

print(Solution().isSameTree(root1, root2))