class Solution(object):
    def calPoints(self, ops):
        """
        :type ops: List[str]
        :rtype: int
        """
        mark=[]
        for i in range(len(ops)):
            if ops[i]=='D':
                mark.append(2*mark[-1])
            elif ops[i]=='C':
                mark.pop()
            elif ops[i]=='+':
                mark.append(mark[-1]+mark[-2])
            else:
                mark.append(int(ops[i]))
        return sum(mark)
                
            
