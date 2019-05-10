# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def levelOrderBottom(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        l=[]
        def co(root,h):
            if not root:
                return
            if len(l)<h:
                l.append([root.val])
            else:
                l[h-1].append(root.val)
            co(root.left,h+1)
            co(root.right,h+1)
        co(root,1)
        return l[::-1]
