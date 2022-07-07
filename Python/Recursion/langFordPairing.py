# Langford Pairing
# You are given a positive integer N. Return a list of integers of size 2N containing all the integers from 1 to N (both inclusive) twice arranged according to Langford pairing. If no such pairing exists return -1 is the only list element.
# So for N = 4 => [4, 1, 3, 1, 2, 4, 3, 2]
# In langford pairing each number n is n spaces apart from each other. so 4 comes after 4 spaces, 1 after 1, 3 after 3 and 2 after 2 spaces.

'''
    Time complexity: O(N ^ N)
    Space complexity: O(N) 
    
    Where N is the input integer.
'''

def findLangfordHelper(ans, n):

    if(n == 0): 
        return True
    
    for i in range(len(ans)-n-1):
        
        # If empty slot
        if (ans[i] == 0 and ans[i + n + 1] == 0):
            
            # Fill slot
            ans[i] = n
            ans[i + n + 1] = n

            # Recursively call to fill remaining elements.
            if (findLangfordHelper(ans, n - 1)):
                return True
            
            # Undo
            ans[i] = 0
            ans[i + n + 1] = 0
 
    return False

def findLangford(n):
    
    if(n % 4 == 1 or n % 4 == 2):
        ans=[-1]
        return ans
    ans=[0]*(2 * n)
    findLangfordHelper(ans, n)
    return ans 

print(findLangford(4))