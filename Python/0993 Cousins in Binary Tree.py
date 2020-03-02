# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isCousins(self, root, x, y):
        """
        :type root: TreeNode
        :type x: int
        :type y: int
        :rtype: bool
        """
        g = {}
        def f(root, i=0, parentVal=None):
            if root == None:
                return
            g[root.val] = (i, parentVal)
            f(root.left, i+1, parentVal=root.val)
            f(root.right, i+1, parentVal=root.val)
        f(root)
        return g[x][0] == g[y][0] and g[x][1] != g[y][1]
        
