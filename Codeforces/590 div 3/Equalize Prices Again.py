from math import ceil
queries = int(input())

for y in range(queries):
    n = int(input())
    prices = sorted(list(map(int, input().split())))
    avg = ceil(sum(prices)/n)

    print(avg)