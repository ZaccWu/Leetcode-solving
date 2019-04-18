class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack=[]
        for i in s:
            if i in ['(','[','{']:  # The operation of array in Python is more flexible
                stack.append(i)
            else:                   # Using dictionary
                if not stack or {')':'(',']':'[','}':'{'}[i]!=stack[-1]:
                    return False    # ]}) are keys while [{( are corresponding values
                stack.pop()
        return not stack
