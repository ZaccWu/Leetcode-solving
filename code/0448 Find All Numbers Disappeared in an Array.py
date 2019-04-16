class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        for num in nums:
            num = abs(num)
            if nums[num-1] >0:
                nums[num-1] *=-1
        a=[i+1 for i,x in enumerate(nums) if x>0]
        return a
