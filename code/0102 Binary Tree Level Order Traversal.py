# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

#recursive solution
class Solution:
    def _levelOrder(self, level, result, node):
        if node:
            if level == len(result):
                result.append([])
                
            result[level].append(node.val)
            self._levelOrder(level+1, result, node.left)
            self._levelOrder(level+1, result, node.right)

    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        level, result = 0, list()
        self._levelOrder(level, result, root)
        return result 


            
            
