class Solution(object):
    def removeDuplicates(self, nums):
        for i in range(len(nums)-1,0,-1):
            if nums[i-1]==nums[i]:
                nums.pop(i)     #remove the element
        return len(nums)
