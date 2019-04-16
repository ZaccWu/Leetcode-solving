# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def middleNode(self, head: ListNode) -> ListNode:
        A = head
        B = A
        while A.next and A.next.next:
            B = B.next
            A = A.next.next
        if A.next is None:
            return B
        else:
            return B.next
