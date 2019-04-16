# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """
        if headA is None or headB is None: return None
        ca,cb = headA, headB
        for _ in range(3):
            while(ca and cb):
                if ca == cb: return ca
                ca = ca.next
                cb = cb.next
            if ca is None: ca = headB
            if cb is None: cb = headA        
        return None
