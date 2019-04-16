# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# iterative
class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if not head: return None
        prev, cur = None, head
        
        while cur:
            next = cur.next
            cur.next = prev
            prev = cur
            cur = next
        return prev   
    
# recursive
class Solution:
    def reverseList(self, head):
        if not head or not head.next:
            return head
        
        new_head = self.reverseList(head.next)
        next_node = head.next    #        head -> next_node 
        next_node.next = head    #        head <- next_node 
        head.next = None         # [x] <- head <- next_node 
        return new_head
