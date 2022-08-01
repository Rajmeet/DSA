# 199. Binary Tree Right Side View
# Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution(object):
    def rightSideView(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        ans = []
        def dfs(root, level):
            if root is None:
                return 
            if len(ans) == level:
                ans.append(root.val)
            dfs(root.right,level+1)
            dfs(root.left,level+1)
        dfs(root,0)
        return ans

root = TreeNode(1)
root.left = TreeNode(2)
root.left.left = TreeNode(3)
root.left.right = TreeNode(4)
root.left.right.right = TreeNode(7)
root.right = TreeNode(5)
root.right.right = TreeNode(6)
root.right.right.right = TreeNode(8)
root.right.right.right.right = TreeNode(9)

print(Solution().rightSideView(root))

