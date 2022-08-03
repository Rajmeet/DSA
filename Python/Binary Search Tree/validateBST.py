# 98. Validate Binary Search Tree
# Given the root of a binary tree, determine if it is a valid binary search tree (BST).

# A valid BST is defined as follows:

# The left subtree of a node contains only nodes with keys less than the node's key.
# The right subtree of a node contains only nodes with keys greater than the node's key.
# Both the left and right subtrees must also be binary search trees.

class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution(object):
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        def isBST(root, mini, maxi):
            if root is None:
                return True
            
            if mini < root.val < maxi:
                left = isBST(root.left, mini, root.val)
                right = isBST(root.right, root.val, maxi)
                return left and right
            
            else:
                return False
        return isBST(root, float('-inf'), float('inf'))

root = TreeNode(3)
root.left = TreeNode(2)
root.right = TreeNode(5)
root.right.left = TreeNode(4)
root.right.right = TreeNode(6)
print(Solution().isValidBST(root))
