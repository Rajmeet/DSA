# 2244. Minimum Rounds to Complete All Tasks

# You are given a 0-indexed integer array tasks, where tasks[i] represents the difficulty level of a task. In each round, you can complete either 2 or 3 tasks of the same difficulty level.

# Return the minimum rounds required to complete all the tasks, or -1 if it is not possible to complete all the tasks.

# Input: tasks = [2,2,3,3,2,4,4,4,4,4]
# Output: 4

# Input: tasks = [2,3,3]
# Output: -1

from typing import Counter, List


def getTotalRounds(n):
    total = 0
    while n != 0:
        if n - 3 >= 0:
            n -= 3
            total += 1
            continue
        if n - 2 >= 0:
            n -= 2
            total += 1
            continue
        total += 1
        n -= n
        
    return total

class Solution:
    def minimumRounds(self, tasks: List[int]) -> int:
        c = Counter(tasks)
        def approach1():
            total = 0
            for i in c:      
                if c[i] == 1:
                    return -1
                total += getTotalRounds(c[i])
            return total

        # Approach 2
        def approach2():
            total = 0
            for i in c:
                if c[i] == 1:
                    return -1
                total += (c[i] + 2) // 3
            return total
        
        return approach2()

print(Solution().minimumRounds([2,2,3,3,2,4,4,4,4,4]))
print(Solution().minimumRounds([2,3,3]))
