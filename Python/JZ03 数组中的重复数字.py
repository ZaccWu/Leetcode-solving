'''
找出数组中重复的数字。

在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。
数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。

示例 1：

输入：
[2, 3, 1, 0, 2, 5, 3]
输出：2 或 3 
 
限制：2 <= n <= 100000
'''

class Solution(object):
    def findRepeatNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        for i in range(len(nums)):
            if nums[i]==i:  # 注意这里不要while nums[i]!=i，否则超时（相等时死循环）
                continue;
            swap(nums[i],nums[nums[i]])

        for i in range(len(nums)):
            if nums[i]!=i:
                return nums[i]

def swap(a, b): # swap函数分开写
    temp=a
    b=temp
    a=b
    return a,b

# 下标查找：若某个数字不等于其下标，则该数字和等于该数字下标处的数字交换, 直到相等为止
# 时间复杂度O(n)
# 空间复杂度O(1)
