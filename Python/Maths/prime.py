# Write a function to check if a number is prime or not

def checkPrime(n):
    for i in range(2, n):
        if n%i == 0:
            return False
    return True

print(checkPrime(5))
print(checkPrime(10))
print(checkPrime(7))
