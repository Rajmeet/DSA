
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''
class Solution:
    def printBoundaryView(self, root):
        if not root:
            return []
        ans = [root.data]
        
        def traverseLeft(root):
            if root is None or (root.left is None and root.right is None):
                return
            ans.append(root.data)
            if root.left:
                traverseLeft(root.left)
            else:
                traverseLeft(root.right)
        traverseLeft(root.left)
        
        def traverseLeaf(node):
            if node is None:
                return
            
            if (node.left is None and node.right is None):
                ans.append(node.data)
            
            traverseLeaf(node.left)
            traverseLeaf(node.right)
        
        traverseLeaf(root.left)
        traverseLeaf(root.right)
        
        def traverseRight(root):
            if root is None or (root.left is None and root.right is None):
                return
            if root.right:
                traverseRight(root.right)
            else:
                traverseRight(root.left)
            ans.append(root.data)
        
        traverseRight(root.right)
        return ans