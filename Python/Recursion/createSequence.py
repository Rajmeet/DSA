# Given an integer N, you need to print all numbers less than N which are having digits only 2 or 5 or both.
# All numbers less than 30 with digits 2 and 5 are 2, 5, 22, 25.
# n = 10 => 2 5
# n = 100 => 2 5 22 25 52 55

def createSequence(n):
    ans = []
    def helper(i):
        if i > n:
            return
        if i != 0:
            ans.append(i)
        helper(i*10+2)
        helper(i*10+5)

    helper(0)    
    return sorted(ans)

print(createSequence(10))
print(createSequence(100))
