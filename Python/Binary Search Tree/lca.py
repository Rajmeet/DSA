# 235. Lowest Common Ancestor of a Binary Search Tree

# Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.

# According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

# Definition for a binary tree node.
from tkinter.tix import Tree


class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution(object):
    def lowestCommonAncestor(self, root, p, q):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """  
        while root:
            if root.val > p.val and root.val > q.val:
                root = root.left
            
            elif root.val < p.val and root.val < q.val:
                root = root.right
            else:
                return root            

    def findLCA(self, root, p, q):
        if root is None:
            return 
        
        if root.val > p.val and root.val > q.val:
            return self.findLCA(root.left, p, q)
        
        if root.val < p.val and root.val < q.val:
            return self.findLCA(root.right, p, q)
        
        return root

root = TreeNode(2)
root.left = TreeNode(1)
root.right = TreeNode(4)
root.right.left = TreeNode(3)
print(Solution().lowestCommonAncestor(root, root.left, root.right.left).val)