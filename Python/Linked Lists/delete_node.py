# 237. Delete Node in a Linked List
# Write a function to delete a node in a singly-linked list. You will not be given access to the head of the list, instead you will be given access to the node to be deleted directly.
# It is guaranteed that the node to be deleted is not a tail node in the list.

# example: delete 3 in 1 - 2 - 3 - 4 - x
# ans: 1 - 2 - 4 - x

# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None
    def print(head):
        while head:
            print(head.val)
            head = head.next

class Solution(object):
    def deleteNode(self, node):
        """
        :type node: ListNode
        :rtype: void Do not return anything, modify node in-place instead.
        """
        # since we don't have the head node we can swap the nodes and delete
        node.val, node.next.val = node.next.val, node.next
        node.next = node.next.next
        
        
ll = ListNode(1)
ll.next = ListNode(2)
ll.next.next = ListNode(3)
ll.next.next.next = ListNode(4)
ListNode.print(ll)

print()

s = Solution()
s.deleteNode(ll.next.next)
ListNode.print(ll)
    