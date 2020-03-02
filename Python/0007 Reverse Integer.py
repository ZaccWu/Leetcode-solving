class Solution:
    def reverse(self, x: int) -> int:
        if x<0:
            x=-1*int(str(-1*x)[::-1])
            if (x<(-2**31)):
                return 0
            return x
        else:
            x=int(str(x)[::-1])
            if (x> (2**31) -1):
                return 0
            return x
