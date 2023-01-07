# 134. Gas Station
# There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].

# You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.

# Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique

# Input: gas = [1,2,3,4,5], cost = [3,4,5,1,2]
# Output: 3 

# Input: gas = [2,3,4], cost = [3,4,3]
# Output: -1

# Input: gas = [5,1,2,3,4], cost =[4,4,1,5,1]
# output: 4

# Input: gas = [4,5,2,6,5,3], cost = [3,2,7,3,2,9]
# Output: -1

from typing import List

class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        # Approach 1: TLE - O(N^2)
        def approach1():
            for i in range(len(gas)):
                total = (gas[i] - cost[i])
                
                if total < 0:
                    continue
                j = (i+1) % len(gas)
                for _ in range(0, len(gas)):
                    total += (gas[j] - cost[j])
                    
                    if total < 0:
                        break
                    
                    j = (j + 1) % len(gas)

                if total >= 0:
                    return i
            return -1

        # Approach 2: Greedy - O(N)
        def approach2():
            # total travel
            total = 0 
            # current index
            start = 0
            # current tank levels
            tank = 0 

            for i in range(len(gas)):
                # update the tank with the gas it filled at i - the cost for i
                tank += (gas[i] - cost[i])

                if tank < 0:
                    # ignore this value
                    start = i + 1
                    # update total 
                    total += tank
                    # reset the tank
                    tank = 0
            
            return start if (tank+total) >= 0 else -1

        return approach2()



print(Solution().canCompleteCircuit([1,2,3,4,5], [3,4,5,1,2]))
print(Solution().canCompleteCircuit([2,3,4], [3,4,3]))
print(Solution().canCompleteCircuit([5,1,2,3,4], [4,4,1,5,1]))
print(Solution().canCompleteCircuit([4,5,2,6,5,3], [3,2,7,3,2,9]))
