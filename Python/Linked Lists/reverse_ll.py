# 206. Reverse Linked List
# Given the head of a singly linked list, reverse the list, and return the reversed list.

# Input: head = [1,2,3,4,5]
# Output: [5,4,3,2,1]

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
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        prevptr, currptr, nextptr = None, head, head.next
        while currptr:
            currptr.next = prevptr
            prevptr = currptr
            currptr = nextptr
            if nextptr:
                nextptr = currptr.next
        return prevptr


# 10100 - 4 + 16
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

