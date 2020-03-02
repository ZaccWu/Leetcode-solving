class Solution(object):
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        def helper(num):
            for tmp in nums2[nums2.index(num):]:
                if tmp > num:
                    return tmp
            return -1
        return map(helper, nums1)
