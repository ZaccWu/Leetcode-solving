'''
把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。输入一个递增排序的数组的一个旋转，输出旋转数组的最小元素。
例如，数组 [3,4,5,1,2] 为 [1,2,3,4,5] 的一个旋转，该数组的最小值为1。  
示例 1：
输入：[3,4,5,1,2]
输出：1
示例 2：
输入：[2,2,2,0,1]
输出：0
'''


class Solution(object):
    def findMin(self, numbers):
        """
        :type numbers: List[int]
        :rtype: int
        """
        if len(numbers)==1:                     # 只有一个
            return numbers[0]
        if numbers[len(numbers)-1]>numbers[0]:  # 如果最小的在最前面的特殊例子
            return numbers[0]
        for i in range(1,len(numbers)):
            if numbers[i-1]>numbers[i]:
                return numbers[i]
        return numbers[len(numbers)-1]          # 最小的在最后面

'''
这题本来不难，那要注意边际用例的这些坑
'''
