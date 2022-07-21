from queue import Queue

class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def inOrder(root):
    if root is None:
        return
    inOrder(root.left)
    print(root.val, end=' ')
    inOrder(root.right)

def preOrder(root):
    if root is None:
        return
    print(root.val, end=' ')
    preOrder(root.left)
    preOrder(root.right)

def postOrder(root):
    if root is None:
        return
    postOrder(root.left)
    postOrder(root.right)
    print(root.val, end=' ')

def levelOrder(root):
    q = Queue()
    q.put(root)
    while not q.empty():
        temp = q.get()
        print(temp.val, end=' ')
        if temp.left:
            q.put(temp.left)
        if temp.right:
            q.put(temp.right)

# #       1
# #    2    3
# #   4       5
# root = TreeNode(1)
# root.left = TreeNode(2)
# root.right = TreeNode(3)
# root.left.left = TreeNode(4)
# root.left.right = TreeNode(5)
# print("Inorder:")
# inOrder(root)
# print()

# print("PostOrder:")
# postOrder(root)
# print()

# print("PreOrder:")
# preOrder(root)
# print()

# print("LevelOrder:")
# levelOrder(root)
# print()
