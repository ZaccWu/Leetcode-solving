class Solution(object):
    def reconstructQueue(self, people):
        """
        :type people: List[List[int]]
        :rtype: List[List[int]]
        """
        res=[]
        # For the first component, we use descending order, for the second component, we use ascending order.
        people = sorted(people, key = lambda x: (-x[0], x[1]))
        # The usage of 'insert' function: insert(index,object)
        for p in people:
            res.insert(p[1], p)
        return res
