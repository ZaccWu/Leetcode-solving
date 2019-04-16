class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        ans=[]
        for num in nums:
            num = abs(num)
            nums[num-1] *=-1
            if nums[num-1]>0:
                ans.append(num)
        return ans
