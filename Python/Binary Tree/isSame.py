# 100. Same Tree
# Given the roots of two binary trees p and q, write a function to check if they are the same or not.
# Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution(object):
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        if p is None and q is None:
            return True
        if (not p and q) or (p and not q):
            return False
        
        left = self.isSameTree(p.left, q.left)
        right = self.isSameTree(p.right, q.right)

        return left and right and p.val == q.val

r1 = TreeNode(1)
r1.left = TreeNode(2)
r1.right = TreeNode(3)

r2 = TreeNode(1)
r2.left = TreeNode(2)
r2.right = TreeNode(3)

print(Solution().isSameTree(r1,r2))
