'''
输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。

示例 1：
输入：head = [1,3,2]
输出：[2,3,1]
 
限制：
0 <= 链表长度 <= 10000
'''
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# Python递归解法
class Solution(object):
    def reversePrint(self, head):
        """
        :type head: ListNode
        :rtype: List[int]
        """
        if head==None:
            return []
        res=self.reversePrint(head.next)    # 这种方法来递归
        res.append(head.val)
        return res
