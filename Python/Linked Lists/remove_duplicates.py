# Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
# 1 - 1 - 2  => 1 - 2


# Definition for singly-linked list.
from re import I


class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
    def print(head):
        while head:
            print(head.val, end = " ")
            head = head.next

class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        curr = head
        while curr and curr.next:
            if curr.next.val == curr.val:
                curr.next = curr.next.next
            else:
                curr = curr.next
        return head