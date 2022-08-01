# 987. Vertical Order Traversal of a Binary Tree

# Given the root of a binary tree, calculate the vertical order traversal of the binary tree.
# For each node at position (row, col), its left and right children will be at positions (row + 1, col - 1) and (row + 1, col + 1) respectively. The root of the tree is at (0, 0).
# The vertical order traversal of a binary tree is a list of top-to-bottom orderings for each column index starting from the leftmost column and ending on the rightmost column. There may be multiple nodes in the same row and same column. In such a case, sort these nodes by their values.
# Return the vertical order traversal of the binary tree.

# Input: root = [3,9,20,null,null,15,7]
# Output: [[9],[3,15],[20],[7]]
from queue import Queue
from collections import defaultdict
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution(object):
    def verticalTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        mapper = defaultdict(list)
        q = Queue()
        q.put([root,0,0])
        ans = []
        if root is None:
            return ans  
        while not q.empty():
            curr, hd, level = q.get()
            mapper[hd].append((level,curr.val))
            if curr.left:
                q.put([curr.left, hd-1, level+1])
            if curr.right:
                q.put([curr.right, hd+1, level+1])

        for key in sorted(mapper.keys()):
            ans.append([v[1] for v in sorted(mapper[key])])        
        return ans

root = TreeNode(3)
root.left = TreeNode(9)
root.right = TreeNode(20)
root.right.left = TreeNode(15)
root.right.right = TreeNode(7)
print(Solution().verticalTraversal(root))
