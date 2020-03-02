# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    # recursively
    def recur(self, root, res):
        if root:
            res.append(root.val)
            self.recur(root.left,res)
            self.recur(root.right,res)
        
    def preorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        res=[]
        self.recur(root,res)
        return res
        
    # iteratively
    def preorderTraversal(self, root):
        stack, res = [root], []
        while stack:
            node = stack.pop()
            if node:
                res.append(node.val)
                stack.append(node.right) # first in last out, so we first append 'right'
                stack.append(node.left)
        return res
        
