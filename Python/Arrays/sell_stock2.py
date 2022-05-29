# 122. Best Time to Buy and Sell Stock II
# You are given an integer array prices where prices[i] is the price of a given stock on the ith day.
# On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.
# Find and return the maximum profit you can achieve.

#TC1
# Input: prices = [7,1,5,3,6,4]
# Output: 7
# Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
# Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
# Total profit is 4 + 3 = 7.

# TC2
# Input: prices = [1,2,3,4,5]
# Output: 4
# Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
# Total profit is 4.

# TC3
# Input: prices = [7,6,4,3,1]
# Output: 0
# Explanation: There is no way to make a positive profit, so we never buy the stock to achieve the maximum profit of 0.

class Solution(object):
    def maxProfit(self,prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        maxProfit = 0 
        for i in range(1, len(prices)):
            profit = prices[i] - prices[i-1]
            if prices[i] > prices[i-1]:         # prices[i] is local max
                maxProfit += profit
        return maxProfit 



s = Solution()
prices = [7,1,5,3,6,4]
print("The indices are for TC1 are", s.maxProfit(prices))

prices = [1,2,3,4,5]
print("The indices are for TC2 are", s.maxProfit(prices))

prices = [7,6,4,3,1]
print("The indices are for TC3 are", s.maxProfit(prices))


                




