# 1431. Kids With the Greatest Number of Candies

# There are n kids with candies. You are given an integer array candies, where each 
# candies[i] represents the number of candies the ith kid has, and an integer extraCandies, 
# denoting the number of extra candies that you have.

# Return a boolean array result of length n, where result[i] is true if, after giving the ith 
# kid all the extraCandies, they will have the greatest number of candies among all the kids, 
# or false otherwise.

# Input: candies = [2,3,5,1,3], extraCandies = 3
# Output: [true,true,true,false,true] 

# Input: candies = [4,2,1,1,2], extraCandies = 1
# Output: [true,false,false,false,false] 


from typing import List


class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        maximum = max(candies)
        ans = [False]*len(candies)
        for i in range(len(candies)):
            if (candies[i] + extraCandies) >= maximum:
                ans[i] = True
        
        return ans
            
print(Solution().kidsWithCandies([2,3,5,1,3], 3))
