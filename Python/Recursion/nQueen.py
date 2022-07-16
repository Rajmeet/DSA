# 51. N-Queens
# The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.
# Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.
# Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.


# Input: n = 4
# Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
# Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
class Solution(object):
    def solveNQueens(self, n):
        """
        :type n: int
        :rtype: List[List[str]]
        """

        col = set()
        posDiag = set() # (r+c)
        negDiag = set() # (r-c)
        ans = []
        board = [["."]*n for i in range(n)]

        def backtrack(r):
            if r == n:  # current rows = total rows
                copy = ["".join(row) for row in board]
                ans.append(copy)   
                return
            
            for c in range(n):
                if c in col or r+c in posDiag or r-c in negDiag:    # check if we can place the queen
                    continue
                
                # place the queen
                board[r][c] = "Q"   
                col.add(c)          
                posDiag.add(r+c)
                negDiag.add(r-c)
                
                backtrack(r+1)

                # backtracking step
                board[r][c] = "."
                col.remove(c)
                posDiag.remove(r+c)
                negDiag.remove(r-c)
            
        backtrack(0)
        return ans        
    
print(Solution().solveNQueens(4))