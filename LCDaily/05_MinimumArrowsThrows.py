# 452. Minimum Number of Arrows to Burst Balloons
# There are some spherical balloons taped onto a flat wall that represents the XY-plane. The balloons are represented as a 2D integer array points where points[i] = [xstart, xend] denotes a balloon whose horizontal diameter stretches between xstart and xend. You do not know the exact y-coordinates of the balloons.

# Arrows can be shot up directly vertically (in the positive y-direction) from different points along the x-axis. A balloon with xstart and xend is burst by an arrow shot at x if xstart <= x <= xend. There is no limit to the number of arrows that can be shot. A shot arrow keeps traveling up infinitely, bursting any balloons in its path.

# Given the array points, return the minimum number of arrows that must be shot to burst all balloons.

# Example 1
# Input: points = [[10,16],[2,8],[1,6],[7,12]]
# Output: 2

# Example 2
# Input: points = [[1,2],[3,4],[5,6],[7,8]]
# Output: 4

# Example 3 
# Input: points = [[1,2],[2,3],[3,4],[4,5]]
# Output: 2

from typing import List


class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points.sort()
        arrows = 0
        rightMost = -float('inf')

        for start, end in points:
            if start > rightMost:
                arrows += 1
                rightMost = end
            else:
                rightMost = min(rightMost, end)
        return arrows


print(Solution().findMinArrowShots([[10,16],[2,8],[1,6],[7,12]]))
print(Solution().findMinArrowShots([[1,2],[3,4],[5,6],[7,8]]))
print(Solution().findMinArrowShots([[1,2],[2,3],[3,4],[4,5]]))
