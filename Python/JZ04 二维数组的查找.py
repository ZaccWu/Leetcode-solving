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
