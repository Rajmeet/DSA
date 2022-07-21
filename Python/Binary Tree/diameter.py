# 543. Diameter of Binary Tree
# Given the root of a binary tree, return the length of the diameter of the tree.
# The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.
# The length of a path between two nodes is represented by the number of edges between them.

    
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution(object):    
    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        def getDiameter(root):
            if root is None:
                return (0,0)
            
            leftDiameter, leftHeight = getDiameter(root.left)
            rightDiameter, rightHeight = getDiameter(root.right)
            height = 1 + max(leftHeight, rightHeight)
            diameter = max(leftHeight+rightHeight, max(leftDiameter, rightDiameter))
            return diameter, height 
            
        return getDiameter(root)[0]
        
root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)
root.left.left = TreeNode(4)
root.left.right = TreeNode(5)
print(Solution().diameterOfBinaryTree(root))
