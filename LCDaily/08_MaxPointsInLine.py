# 149. Max Points on a Line

# Given an array of points where points[i] = [xi, yi] represents a point on the X-Y plane, return the maximum number of points that lie on the same straight line.

# Input: points = [[1,1],[2,2],[3,3]]
# Output: 3

# Input: points = [[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]
# Output: 4

from typing import List

class Solution:
    def maxPoints(self, points: List[List[int]]) -> int:
        def getSlope(p1, p2):
            x1, y1 = p1
            x2, y2 = p2
            if x2-x1 == 0:
                return float("inf")
            return (y2-y1)/(x2-x1)
        
        if len(points) <= 2:
            return len(points)
        
        ans = 1
        for i in range(len(points)):
            d = {}
            for j in range(i+1, len(points)):
                m = getSlope(points[i], points[j])
                if m not in d:
                    d[m] = 1
                else:
                    d[m] += 1
                ans = max(ans, d[m])
        
        return ans+1

points1 = [[1,1],[2,2],[3,3]]
points2 = [[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]

print(Solution().maxPoints(points1))
print(Solution().maxPoints(points2))