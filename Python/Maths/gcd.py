# Write a function to calculate the GCD of two numbers

def gcd(a,b):
    while a != 0 and b != 0:
        if a > b:
            a %= b
        else:
            b %= a
    return a
        

print(gcd(21,85))