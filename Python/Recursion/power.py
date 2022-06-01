def pow(x, n):
    if n == 0:
        return 1
    return x * pow(x, n-1)

def fastpow(x, n):
    if n == 0:
        return 1
    if n == 1:
        return x
    if n%2 == 1:
        return x * pow(x, n/2) * pow(x, n/2)
    return pow(x, n/2) * pow(x, n/2)

print(fastpow(2,4))
print(pow(2,4))

