class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        s="".join(str(x) for x in nums).split('0') #connect the array
        return len(max(s)) #return the longest continue part
