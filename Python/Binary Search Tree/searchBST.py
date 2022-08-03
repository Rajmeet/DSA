# 700. Search in a Binary Search Tree

# You are given the root of a binary search tree (BST) and an integer val.
# Find the node in the BST that the node's value equals val and return the subtree rooted with that node. If such a node does not exist, return null.

# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution(object):
    def searchBST(self, root, val):
        """
        :type root: TreeNode
        :type val: int
        :rtype: TreeNode
        """
        def search(root):
            if root is None:
                return None

            if root.val == val:
                return root
            
            if val > root.val:
                return search(root.right)
            if val < root.val:
                return search(root.left)
        return search(root)

root = TreeNode(4)
root.left = TreeNode(2)
root.right = TreeNode(6)
root.right.left = TreeNode(5)
root.right.right = TreeNode(7)

print(Solution().searchBST(root, 5).val)