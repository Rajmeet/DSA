# 1290. Convert Binary Number in a Linked List to Integer
# Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.
# Return the decimal value of the number in the linked list.

# Input: head = [1,0,1]
# Output: 5
# Explanation: (101) in base 2 = (5) in base 10

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
    def getDecimalValue(self, head):
        """
        :type head: ListNode
        :rtype: int
        """
        ans = 0
        temp = head
        while temp:
            ans *= 2
            ans += temp.val
            temp = temp.next
        return ans


# 10100 - 4 + 16
ll = ListNode(1)
ll.next = ListNode(0)
ll.next.next = ListNode(1)
ll.next.next.next = ListNode(0)
ll.next.next.next.next = ListNode(0)
ListNode.print(ll)


s = Solution()
print("=", s.getDecimalValue(ll))

