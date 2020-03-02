# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isSymmetric(self, root):
        return not root or self.is_same(root.left, root.right)
    
    def is_same(self, left, right):
        return left and right and left.val == right.val and self.is_same(left.left, right.right) and self.is_same(left.right, right.left) or left is right
        
