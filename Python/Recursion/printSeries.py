# Print Series
# You are given a number N and a number k. Your task is to print a series of numbers i.e subtract K from N until N becomes 0
# or N becomes negative and then add k until it becomes N.
# Input: N = 5, k = 2
# Output: [5, 3, 1, -1, -3]
# Input: N = 3, k = 2
# Output: [3, 1, -1, 1, 3]

def printSeries(n, k):
    ans = []
    def helper(i):
        ans.append(i)
        if i <= 0:
            return
        helper(i-k)
        ans.append(i)
    helper(n)
    return ans

print(printSeries(5,2))
        
