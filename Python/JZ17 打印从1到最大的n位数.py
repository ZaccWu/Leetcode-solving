'''
输入数字 n，按顺序打印出从 1 到最大的 n 位十进制数。比如输入 3，则打印出 1、2、3 一直到最大的 3 位数 999。

示例 1:
输入: n = 1
输出: [1,2,3,4,5,6,7,8,9]
 

说明：
用返回一个整数列表来代替打印
n 为正整数
'''

class Solution(object):
    def printNumbers(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        List=[]
        for i in range(1,10**n):
            List.append(i)
        return List

'''
当然更简单只需要一行这样的：
return range(1, 10**n)
不过这题主要考察点应该是在溢出，用Python做毫无意义，考点请见C语言代码
'''
