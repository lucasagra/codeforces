n, m = map(int, input().split())
prices = sorted(list(map(int, input().split())))

max = 0
count = 0
while count < m and prices[count] < 0:
    max += abs(prices[count])
    count += 1

print(max)