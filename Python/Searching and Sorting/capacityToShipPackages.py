# 1011. Capacity To Ship Packages Within D Days

# A conveyor belt has packages that must be shipped from one port to another within days days.

# The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

# Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.

# Understanding:
# You need to transport goods from one item to another. These goods can be thought of an array and each has a weight attached to it. There is a ship of capacity K that can be used to move items from one place to another. It takes one day to move items of total capacity k from one island to another and back. Given D days find the capacity of the ship. 

# Linear Search - O(N)
def getDays(weights, capacity):
    d = 1
    remaining_capacity = capacity
    for i in range(len(weights)):
        if weights[i] <= remaining_capacity:
            remaining_capacity -= weights[i]
        else:
            d += 1
            remaining_capacity = capacity - weights[i]
    return d


def findCapacity(weights, days):
    s = max(weights)
    e = sum(weights)
    ans = 10**7
    while s <= e:
        mid = (s+e)//2
        d = getDays(weights, mid)
        if d <= days:
            ans = mid 
            e = mid - 1
        else:
            s = mid + 1
    return ans


items = [5,6,3,1,4,3]
d = 3
print(findCapacity(items, d))


weights = [1,2,3,4,5,6,7,8,9,10]
days = 5
print(findCapacity(weights, days))
