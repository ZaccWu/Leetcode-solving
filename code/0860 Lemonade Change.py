class Solution(object):
    def lemonadeChange(self, bills):
        """
        :type bills: List[int]
        :rtype: bool
        """
        dic = {5: 0, 10: 0, 20: 0}
        for i in bills:
            if i == 5:
                dic[5] += 1
            elif i == 10 and dic[5] >= 1:
                dic[5] -= 1
                dic[10] += 1
            elif i == 10 and dic[5] < 1:
                return False
            elif dic[10] >= 1 and dic[5] >= 1:
                dic[10] -= 1
                dic[5] -= 1
                dic[20] += 1
            elif dic[5] >= 3:
                dic[5] -= 3
                dic[20] += 1
            else:
                return False
        return True
            
