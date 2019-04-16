# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def detectCycle(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        fast=head
        slow=head
        while fast and fast.next:
            fast=fast.next.next
            slow=slow.next
            if fast is slow:
                fast=head
                while fast is not slow:
                    fast=fast.next
                    slow=slow.next
                return fast
