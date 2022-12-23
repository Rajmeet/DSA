# 542. 01 Matrix
# Given an m x n binary matrix mat, return the distance of the nearest 0 for each cell.
# The distance between two adjacent cells is 1.

from collections import deque
class Solution(object):
    def updateMatrix(self, matrix):
        """
        :type mat: List[List[int]]
        :rtype: List[List[int]]
        """
        q = deque()
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j] == 0:
                    q.append((i, j))
                else:
                    matrix[i][j] = -1

        while q:
            x, y = q.popleft()
            for r, c in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                newX, newY = x+r, y+c
                if 0 <= newX < len(matrix) and 0 <= newY < len(matrix[0]) and matrix[newX][newY] == -1:
                    matrix[newX][newY] = matrix[x][y] + 1
                    q.append((newX, newY))
        return matrix

print(Solution().updateMatrix([[0,0,0],[0,1,0],[1,1,1]]))