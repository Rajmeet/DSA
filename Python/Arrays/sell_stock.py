# Best Time to buy and sell stock
# You are given an array prices where prices[i] is the price of a given stock on the ith day.
# You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
# Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

# TC1
# Input: prices = [7,1,5,3,6,4]
# Output: 5
# Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
# Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

# TC2
# Input: prices = [7,6,4,3,1]
# Output: 0
# Explanation: In this case, no transactions are done and the max profit = 0.


# Time Complexity: O(N)
# Space Complexity: O(1)
class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        l, r = 0, 1     # l = buy index and r = sell index
        max_profit = 0
        while r < len(prices):  
            profit = prices[r] - prices[l]      # profit = selling price - buying price
            if profit > 0:                      # profit +ve 
                max_profit = max(max_profit, profit)
            else:
                l = r

            r += 1 
        
        return max_profit

s = Solution()
prices = [7,1,5,3,6,4]
print("The indices are for TC1 are", s.maxProfit(prices))

prices = [7,6,4,3,1]
print("The indices are for TC2 are", s.maxProfit(prices))

prices = [1,4,8,0,6,4]
print("The indices are for TC3 are", s.maxProfit(prices))


