# Write a function that returns true if the given Binary Tree is SumTree else false. A SumTree is a Binary Tree where the value of a node is equal to the sum of the nodes present in its left subtree and right subtree. An empty tree is SumTree and the sum of an empty tree can be considered as 0. A leaf node is also considered as SumTree.
# Definition for a binary tree node.
from traversals import *
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution(object):
    def sumTree(self, root):
        """
        :type root: TreeNode(object)
        :rtype: bool
        """
        def dfs(root):
            if root is None:
                return (True,0)
            if root.left is None and root.right is None:
                return (True, root.val)
            
            leftSum = dfs(root.left)
            rightSum = dfs(root.right)
            
            left = leftSum[0]
            right = rightSum[0]
            cond = root.val == leftSum[1] + rightSum[1]
            
            if left and right and cond:
                return True, 2*root.val 
            else:
                return False, 0 
                
        return dfs(root)[0]

root = TreeNode(3)
root.left = TreeNode(2)
root.right = TreeNode(1)


print(Solution().sumTree(root))


        