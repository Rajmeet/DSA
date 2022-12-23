from heapq import heappush, heappop
class Solution(object):
    def kClosest(self, points, k):
        """
        :type points: List[List[int]]
        :type k: int
        :rtype: List[List[int]]
        """
        def findDistance(point):
            return (point[0]**2 + point[1]**2)**0.5
        
        h = []
        for point in points:
            dist = findDistance(point)
            heappush(h, [dist, point])
        
        return [heappop(h)[1] for i in range(k)]
        
print(Solution().kClosest([[1,3],[-2,2]], 1))
print(Solution().kClosest([[3,3],[5,-1],[-2,4]], 2))
