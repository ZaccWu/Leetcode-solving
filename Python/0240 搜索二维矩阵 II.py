'''
在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

示例:
现有矩阵 matrix 如下：
[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
给定 target = 5，返回 true。
给定 target = 20，返回 false。

限制：
0 <= n <= 1000
0 <= m <= 1000
'''

class Solution(object):
    def findNumberIn2DArray(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        if len(matrix)==0:  # 边际用例不要忘了（矩阵为空）
            return False
        m=0
        n=len(matrix[0])-1
        while (n>=0 and m<=len(matrix)-1):        
            if matrix[m][n]==target:
                return True
            elif matrix[m][n]>target:
                n=n-1
            else: m=m+1
        return False

# 遍历查找O(mn)
# 左上开始，走线路。大于删除该列，小于删除该行
