import math

qtd = int(input())
nums = list(set(map(int, input().split())))

def gcd(a, b):
    while b > 0:
        a, b = b, a % b
    return a

def max_gcd(list):
    result = list[0]
    for i in list[1:]:
        result = gcd(result, i)

    return result

limit = max_gcd(nums)
resp = 0

for i in range(1, math.ceil(math.sqrt(limit+1))):
    if limit % i == 0:
        resp += 1
        if limit != i**2 and limit % (limit / i) == 0:
            resp += 1


print(resp)
