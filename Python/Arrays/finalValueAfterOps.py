# 2011. Final Value of Variable After Performing Operations

# There is a programming language with only four operations and one variable X:

# ++X and X++ increments the value of the variable X by 1.
# --X and X-- decrements the value of the variable X by 1.

# Intially x = 0. Find the value after performing these operations

# Input: operations = ["--X","X++","X++"]
# Output: 1

# Input: operations = ["++X","++X","X++"]
# Output: 3

from typing import List


class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        x = 0
        for op in operations:
            if op == "++X" or op == "X++":
                x += 1
            if op == "--X" or op == "X--":
                x -= 1
        return x

print(Solution().finalValueAfterOperations(["--X","X++","X++"]))
print(Solution().finalValueAfterOperations(["++X","++X","X++"]))
