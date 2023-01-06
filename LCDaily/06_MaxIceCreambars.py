# 1833. Maximum Ice Cream Bars
# It is a sweltering summer day, and a boy wants to buy some ice cream bars.

# At the store, there are n ice cream bars. You are given an array costs of length n, where costs[i] is the price of the ith ice cream bar in coins. The boy initially has coins coins to spend, and he wants to buy as many ice cream bars as possible. 

# Return the maximum number of ice cream bars the boy can buy with coins coins.
# Note: The boy can buy the ice cream bars in any order.


# Example 1:
# Input: costs = [1,3,2,4,1], coins = 7
# Output: 4

# Example 2:
# Input: costs = [10,6,8,7,7,8], coins = 5
# Output: 0

# Example 3:
# Input: costs = [1,6,3,1,2,5], coins = 20
# Output: 6

from typing import List

class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        def approach1(coins):
            total = 0
            costs.sort()
            for cost in costs:
                coins -= cost
                total += 1
                if coins < 0:
                    total -= 1

            return total
        def approach2(coins):
            total = 0
            costs.sort()
            for cost in costs:
                if coins >= cost:
                    coins -= cost
                    total += 1
                else:
                    break

            return total

        return approach1(coins)

print(Solution().maxIceCream([1,3,2,4,1], 7))
print(Solution().maxIceCream([10,6,8,7,7,8], 5))
print(Solution().maxIceCream([1,6,3,1,2,5], 20))
