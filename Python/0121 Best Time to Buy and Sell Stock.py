class Solution(object):
    def maxProfit(self, prices):
        maxi = buy = sell = 0
        while sell < len(prices):
            if prices[buy] <= prices[sell]:
                maxi = max(maxi, prices[sell] - prices[buy])
                sell += 1
            else:
                buy = sell
        return maxi
