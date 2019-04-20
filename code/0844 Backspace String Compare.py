class Solution(object):
    def backspaceCompare(self, S, T):
        """
        :type S: str
        :type T: str
        :rtype: bool
        """
        def F(S):
            s = 0
            for x in reversed(S):
                if x == '#':
                    s+=1
                elif s:
                    s-=1
                else:
                    yield x
        
        return all(x == y for x, y in itertools.izip_longest(F(S), F(T)))
