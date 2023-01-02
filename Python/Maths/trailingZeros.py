# Write a function to get the trailing zeros for the factorial of a number n

def factorial(n):
    fact = 1
    for i in range(n, 0, -1):
        fact *= i
    return fact

def countTrailingZeros(n):
    count = 0
    while n % 10 == 0:
        count += 1
        n = n//10

    # temp = n
    # while temp > 0:
    #     if temp%10 == 0:
    #         count += 1
    #     temp //= 10
    return count

fact10 = factorial(10)
fact4 = factorial(4)
print(countTrailingZeros(fact10))
print(countTrailingZeros(fact4))
