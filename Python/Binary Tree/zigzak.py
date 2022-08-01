# 103. Binary Tree Zigzag Level Order Traversal
# Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).
# Input: root = [3,9,20,null,null,15,7]
# Output: [[3],[20,9],[15,7]]
# left to right, then right to left for the next level and alternate between
# for each level we append a list inside a list
from queue import Queue
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        ans = []
        if root is None:
            return ans
        q = Queue()
        leftToRight = True
        q.put(root)
        while not q.empty():
            level = []
            for i in range(q.qsize()):
                node = q.get()
                if leftToRight:
                    level.append(node.val)
                else:
                    level.insert(0, node.val)
                if node.left:
                    q.put(node.left)
                if node.right:
                    q.put(node.right)
            ans.append(level)
            leftToRight = not leftToRight
        return ans


root = TreeNode(3)
root.left = TreeNode(9)
root.right = TreeNode(20)
root.right.left = TreeNode(15)
root.right.right = TreeNode(7)
print(Solution().zigzagLevelOrder(root))