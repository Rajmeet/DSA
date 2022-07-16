# Given an m x n grid of characters board and a string word, return true if word exists in the grid.
# The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

# Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
# Output: true

class Solution(object):
    def exist(self, board, word):
        """
        :type board: List[List[str]]
        :type word: str
        :rtype: bool
        """
        n = len(board)-1
        m = len(board[0])-1
     
        def search(i,j,k):
            if k == len(word):
                return True
            if i < 0 or j < 0 or i > n or j > m or board[i][j] != word[k]:
                return False
            oldCh = board[i][j]
            board[i][j] = "#"
            op1 = search(i+1,j,k+1)
            op2 = search(i-1,j,k+1)
            op3 = search(i,j+1,k+1)
            op4 = search(i,j-1,k+1)  
            board[i][j] = oldCh
            return op1 or op2 or op3 or op4
            
        for i in range(len(board)):
            for j in range(len(board[i])):
                if board[i][j] == word[0]:
                    if(search(i,j,0)):
                        return True
        return False

print(Solution().exist(board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"))

print(Solution().exist(board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "SEE"))
