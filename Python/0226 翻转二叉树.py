'''
翻转一棵二叉树。
示例：
输入：

     4
   /   \
  2     7
 / \   / \
1   3 6   9
输出：

     4
   /   \
  7     2
 / \   / \
9   6 3   1
'''

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    """
    :type root: TreeNode
    :rtype: TreeNode
    """
    
    def invertTree(self, root):
        if root:
            invert = self.invertTree
            root.left, root.right = invert(root.right), invert(root.left)
            return root
    
    def invertTree(self, root):
        stack = [root]
        while stack:
            node = stack.pop()
            if node:
                node.left, node.right = node.right, node.left
                stack += node.left, node.right
        return root
