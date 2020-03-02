'''
请实现一个函数，把字符串 s 中的每个空格替换成"%20"。
示例 1：
输入：s = "We are happy."
输出："We%20are%20happy."

限制：
0 <= s 的长度 <= 10000
'''

# Solution 1 直接利用replace函数
class Solution(object):
    def replaceSpace(self, s):
        """
        :type s: str
        :rtype: str
        """
        return s.replace(' ','%20')

# Solution 2 新建一个数组
class Solution(object):
    def replaceSpace(self, s):
        res=''
        for i in s:
            if i!=' ':
                res+=i
            else:
                res+='%20'
        return res
'''
时间复杂度O(n)，但是新建数组占用了更多空间
'''
