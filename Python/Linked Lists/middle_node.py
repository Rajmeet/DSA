# 876. Middle of the Linked List
# Given the head of a singly linked list, return the middle node of the linked list.
# If there are two middle nodes, return the second middle node.

# Input: head = [1,2,3,4,5]
# Output: [3,4,5]
# Explanation: The middle node of the list is node 3.

class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None
    def print(head):
        while head:
            print(head.val)
            head = head.next

class Solution(object):
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        slow = fast = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        return slow

    def middleNodeUsingLength(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        count = 0
        temp = head
        while temp:
            count += 1
            temp = temp.next
        mid = count // 2
        while mid:
            head = head.next
            mid -= 1
        return head
        
ll = ListNode(1)
ll.next = ListNode(2)
ll.next.next = ListNode(3)
ll.next.next.next = ListNode(4)
ll.next.next.next.next = ListNode(5)
ll.next.next.next.next.next = ListNode(6)

ListNode.print(ll)

print()

s = Solution()
mid = s.middleNode(ll)
ListNode.print(mid)
    