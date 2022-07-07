def sum_of_nums(n):
    if n == 1:
        return 1
    return n + sum_of_nums(n-1) 

print(sum_of_nums(5))
print(sum_of_nums(4))
