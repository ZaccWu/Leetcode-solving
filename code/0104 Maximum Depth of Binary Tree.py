# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if not root:
            return 0
        return 1+max(self.maxDepth(root.left),self.maxDepth(root.right))

# Other solutions
# Using Stack
class Solution(object):
    def maxDepth(self, root):     
        if not root:
            return 0
        tstack,h = [root],0

        #count number of levels
        while tstack:
            nextlevel = []
            while tstack:
                top = tstack.pop()
                if top.left:
                     nextlevel.append(top.left)
                if top.right:
                     nextlevel.append(top.right)
            tstack = nextlevel
            h+=1
        return h
        
# Using Queue
class Solution(object):
    def maxDepth(self, root):     
        if not root:
             return 0

        tqueue, h = collections.deque(),0
        tqueue.append(root)
        while tqueue:
            nextlevel = collections.deque()
            while tqueue:
                front = tqueue.popleft()
                if front.left:
                    nextlevel.append(front.left)
                if front.right:
                    nextlevel.append(front.right)
            tqueue = nextlevel
            h += 1
        return h
