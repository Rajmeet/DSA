# 2032. Two Out of Three

# Given three integer arrays nums1, nums2, and nums3, return a distinct array 
# containing all the values that are present in at least two out of the three arrays. 
# You may return the values in any order.

# Input: nums1 = [1,1,3,2], nums2 = [2,3], nums3 = [3]
# Output: [3,2]
# Explanation: The values that are present in at least two arrays are:
# - 3, in all three arrays.
# - 2, in nums1 and nums2.

# Input: nums1 = [3,1], nums2 = [2,3], nums3 = [1,2]
# Output: [2,3,1]
# Explanation: The values that are present in at least two arrays are:
# - 2, in nums2 and nums3.
# - 3, in nums1 and nums2.
# - 1, in nums1 and nums3.


from typing import List

class Solution:
    def twoOutOfThree(self, nums1: List[int], nums2: List[int], nums3: List[int]) -> List[int]:
        ans = set()
        freq1 = [0] * 101
        freq2 = [0] * 101
        freq3 = [0] * 101

        for num1 in nums1:
            freq1[num1] += 1
        
        for num2 in nums2:
            if freq1[num2] != 0:
                ans.add(num2)
            else:
                freq2[num2] += 1
        
        for num3 in nums3:
            if freq1[num3] != 0 or freq2[num3] != 0:
                ans.add(num3)
            else:
                freq3[num3] += 1
        
        return list(ans)
        

nums1 = [1,1,3,2]
nums2 = [2,3]
nums3 = [3]
print(Solution().twoOutOfThree(nums1, nums2, nums3))
