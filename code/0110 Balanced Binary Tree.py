# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        height = self.height(root)
        return height != -1
    
    def height(self, root):
        if not root:
            return 0
        left_depth = self.height(root.left)
        if left_depth == -1:
            return -1
        right_depth = self.height(root.right)
        if right_depth == -1:
            return -1
        if abs(left_depth - right_depth) > 1:
            return -1
        else:
            return max(left_depth, right_depth) + 1
