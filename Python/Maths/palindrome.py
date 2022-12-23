# Write a function to check if a number is a palindrome or not.

def isPalindrome(n):
    reverseNum = 0
    temp = n
    while temp > 0:
        reverseNum = (reverseNum*10 + temp%10)
        print(reverseNum)
        temp = temp//10
    
    return reverseNum == n


print(isPalindrome(12321))
    
    