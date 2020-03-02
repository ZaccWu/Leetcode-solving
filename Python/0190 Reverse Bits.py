class Solution:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        string=format(n,"b") #convert the integer to its binary form
        string=(32-len(string))*'0'+string #two line to revese the string
        string=string[::-1]
        n=int(string,2)
        return n
