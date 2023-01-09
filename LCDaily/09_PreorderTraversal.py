# 144. Binary Tree Preorder Traversal
# Given the root of a binary tree, return the preorder traversal of its nodes' values.

# Input: root = [1,null,2,3]
# Output: [1,2,3]

# Input: root = []
# Output: []

# Input: root = [1]
# Output: [1]

# Definition for a binary tree node.
from typing import List, Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right 

class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        def traversal(node):
            if node is None: return
            ans.append(node.val)
            traversal(node.left)
            traversal(node.right)
        traversal(root)
        return ans


root1 = TreeNode(1)
root1.right = TreeNode(2)
root1.right.left = TreeNode(3)

root2 = None

root3 = TreeNode(1)

print(Solution().preorderTraversal(root1))
print(Solution().preorderTraversal(root2))
print(Solution().preorderTraversal(root3))