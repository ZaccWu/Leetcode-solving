class Solution(object):
    def leastInterval(self, tasks, n):
        """
        :type tasks: List[str]
        :type n: int
        :rtype: int
        """
        Map=[0]*26
        for i in tasks:
            Map[ord(i)-ord('A')]+=1
    
        Map.sort()
        i=25
        while i>=0 and Map[i] == Map[25]:
            i-=1
        return max(len(tasks),((Map[25]-1)*(n+1)+25-i))   
        
# Order types of solutions:      
class Solution(object):
  def leastInterval(self, tasks, n):
      d = collections.Counter(tasks) # Counter will count the frequency of all of the letters
      counts = d.values()            # Extract the value of the dictionary
      longest = max(counts)
      ans = (longest - 1) * (n + 1)
      for count in counts:
          ans += count == longest and 1 or 0
      return max(len(tasks), ans)
