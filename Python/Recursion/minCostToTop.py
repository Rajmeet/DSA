# Given an array with arr[i] the cost of the stair. Find the minimum cost to get to the top
# [6, 10, 5, 20, 7, 16]
# At any point you can take either one jump or two jumps
# The minimum cost would be 6 + 5 + 7 = 18

def minCost(arr, i, n):
    if i >= n: 
        return 0
    
    x = minCost(arr, i+1, n)
    y = minCost(arr, i+2, n)

    return min(x, y) + arr[i]

cost = [6, 10, 5, 20, 7, 16]
n = len(cost)
print(minCost(cost, 0, n))

