class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # O(N) Time and O(1) Space
        count = res = 0
        for num in nums:
            if count == 0:
                res = num
            count += (1 if res == num else -1)
        return res
        
        # O(N log N) Time Complexity and O(1) Space Complexity
        # nums.sort()
        # return nums[len(nums)//2]
        
        # O(N) Time and Space
        # d = {}
        # for i in nums:
        #     if i not in d:
        #         d[i] = 1
        #     else:
        #         d[i] += 1
        # return max(d.keys(), key=d.get)
    
        
s = Solution()
print(s.majorityElement([3,3,4]))
print(s.majorityElement([2,2,1,1,1,2,2]))



        
