# 110. Balanced Binary Tree
# Given a binary tree, determine if it is height-balanced.
# For this problem, a height-balanced binary tree is defined as:
# a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

# Definition for a binary trwee node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution(object):
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        def dfs(root):
            if root is None:
                return (True,0)
            left, leftH = dfs(root.left)
            right, rightH = dfs(root.right)
            height = 1+max(leftH,rightH)
            diff = left and right and abs(leftH - rightH) <= 1
            return diff,height
        return dfs(root)[0]
            