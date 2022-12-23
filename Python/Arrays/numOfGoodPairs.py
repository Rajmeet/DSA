# 1512. Number of Good Pairs

# Given an array of integers nums, return the number of good pairs.
# A pair (i, j) is called good if nums[i] == nums[j] and i < j.

# Input: nums = [1,2,3,1,1,3]
# Output: 4

# Input: nums = [1,1,1,1]
# Output: 6


from typing import List


class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        # O(N) Time and Space
        count = 0
        # create an array that will hold frequency of each element
        freq = [0] * 101
        for num in nums:
            freq[num] += 1
        
        for i in range(101):
            # total pairs = sum of n natural numbers (n*n-1)/2
            count += (freq[i] * (freq[i]-1))//2
        
        return count

        # O(N^2) Time Complexity
        # count = 0
        # for i in range(len(nums)):
        #     for j in range(i+1,len(nums)):
        #         if nums[i] == nums[j]:
        #             count += 1
        # return count


nums = [1,2,3,1,1,3]
print(Solution().numIdenticalPairs(nums))

nums = [1,1,1,1]
print(Solution().numIdenticalPairs(nums))
