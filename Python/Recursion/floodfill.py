# 733. Flood Fill
# An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.
# You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].

# To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with color.

# Return the modified image after performing the flood fill.

# Input: image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, color = 2
# Output: [[2,2,2],[2,2,0],[2,0,1]]

class Solution(object):
    def floodFill(self, image, sr, sc, newColor):
        """
        :type image: List[List[int]]
        :type sr: int
        :type sc: int
        :type newColor: int
        :rtype: List[List[int]]
        """
        oldColor = image[sr][sc]
        if newColor == oldColor:
            return image
        n = len(image) - 1
        m = len(image[0]) - 1

        def fill(i, j):
            if i < 0 or j < 0 or i > n or j > m or image[i][j] != oldColor:
                return
            
            image[i][j] = newColor
            fill(i+1, j)
            fill(i-1, j)
            fill(i, j+1)
            fill(i, j-1)

        fill(sr,sc)
        return image

print(Solution().floodFill(image=[[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, newColor = 2))