# 230. Kth Smallest Element in a BST
# Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.

# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution(object):
    def kthSmallest(self, root, k):
        """
        :type root: TreeNode
        :type k: int
        :rtype: int
        """
        iterativeAns = self.iterative(root, k)
        recursiveAns = self.recursive(root, k)
        return iterativeAns, recursiveAns

    def iterative(self, root, k):
        stack = []
        while root or stack:
            while root:
                stack.append(root)
                root = root.left
            
            root = stack.pop()
            k -= 1
            if k == 0:
                return root
            root = root.right
        
        return -1

    def recursive(self, root, k):
        ans = []
        def findKthSmallestRecursive(root):
            if root is None:
                return
            
            findKthSmallestRecursive(root.left)
            ans.append(root.val)
            findKthSmallestRecursive(root.right)

        findKthSmallestRecursive(root)
        return ans[k-1]

root = TreeNode(3)
root.left = TreeNode(1)
root.right = TreeNode(4)
root.left.right = TreeNode(2)
print(Solution().kthSmallest(root, 1))