# 704. Binary Search

# Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

# You must write an algorithm with O(log n) runtime complexity.

from typing import List

# Input: nums = [-1,0,3,5,9,12], target = 9
# Output: 4

# Input: nums = [-1,0,3,5,9,12], target = 2

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l = 0 
        r = len(nums)-1
        while l <= r:
            mid = (l+r)//2
            if nums[mid] == target:
                return mid
            elif nums[mid] > target:
                r = mid - 1
            else:
                l = mid + 1
        return -1


nums = [-1,0,3,5,9,12]
target = 9
print(Solution().search(nums, target))

nums = [-1,0,3,5,9,12]
target = 2
print(Solution().search(nums, target))
