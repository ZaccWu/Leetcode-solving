# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        prev_node = head
        if not prev_node: return None
        node = prev_node.next
        while node:
            if node.val == prev_node.val: prev_node.next = node.next
            else: prev_node = node
            node = node.next
        return head
