class Solution(object):
    def twoSum(self, nums, target):
        dic ={}
        for i in range(len(nums)):
            dic[nums[i]] = i
        for i in range(len(nums)):
            distance = target-nums[i]
            if distance in dic and i!= dic[distance]:
                return [i, dic[distance]]
