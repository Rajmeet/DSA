def sum_of_nums(n):
    if n == 0:
        return 0
    return n + sum_of_nums(n-1) 

print(sum_of_nums(5))
print(sum_of_nums(4))
