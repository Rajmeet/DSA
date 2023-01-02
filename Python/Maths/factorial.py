# Write a function to get the factorial for a number

def factorial(n):
    fact = 1
    for i in range(n, 0, -1):
        fact *= i
    return fact

print(factorial(5)) # 120
print(factorial(4)) # 24

