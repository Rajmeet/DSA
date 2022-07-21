from traversals import *
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def countLeaf(root):
    if root is None:
        return 0
    if root.left is None and root.right is None:
        return 1
    return countLeaf(root.left) + countLeaf(root.right)

root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)
root.left.left = TreeNode(4)
root.right.right = TreeNode(5)
print(countLeaf(root))
