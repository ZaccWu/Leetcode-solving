'''
输入某二叉树的前序遍历和中序遍历的结果，请重建该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。

例如，给出
前序遍历 preorder = [3,9,20,15,7]
中序遍历 inorder = [9,3,15,20,7]
返回如下的二叉树：

    3
   / \
  9  20
    /  \
   15   7
 
限制：0 <= 节点个数 <= 5000
'''


# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def buildTree(self, preorder, inorder):
        """
        :type preorder: List[int]
        :type inorder: List[int]
        :rtype: TreeNode
        """
        if not preorder:    # 空例子一定要有
            return None
        root=TreeNode(preorder[0])  # 先序遍历第一个就是根节点
        root_loc=inorder.index(preorder[0]) # 根节点在中序遍历中的位置
        root.left=self.buildTree(preorder[1:root_loc+1],inorder[:root_loc]) # 左子树分治
        root.right=self.buildTree(preorder[root_loc+1:],inorder[root_loc+1:])    # 右子树分治
        return root
        
# 先序遍历和中序遍历的推导关系一定要搞清楚
# 先序遍历确定的节点可以把中序遍历序列划分为左子树和右子树
