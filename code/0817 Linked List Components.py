# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def numComponents(self, head, G):
        """
        :type head: ListNode
        :type G: List[int]
        :rtype: int
        """
        count = p = 0
        G = set(G)
        while head:
            if head.val in G:
                if p == 0:
                    count += 1
                    p = 1
            else:
                p = 0
            head = head.next
        return count
        
