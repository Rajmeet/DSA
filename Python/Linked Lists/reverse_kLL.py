# 25. Reverse Nodes in k-Group
# Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.
# k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

# Input: head = [1,2,3,4,5], k = 2
# Output: [2,1,4,3,5]

# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
    def print(head):
        while head:
            print(head.val, end = " ")
            head = head.next

class Solution(object):
    def reverseKGroup(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """




ll = ListNode(1)
ll.next = ListNode(2)
ll.next.next = ListNode(3)
ll.next.next.next = ListNode(4)
ll.next.next.next.next = ListNode(5)
ListNode.print(ll)
print("\nAfter reverse:")
s = Solution()
rll = s.reverseList(ll)
ListNode.print(rll)

