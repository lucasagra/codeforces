from math import pi
n = int(input())
radiuses = sorted(list(map(int, input().split())), reverse=True)

def area(r):
    return pi*(r**2)

if n == 1:
    print(area(radiuses[0]))
    exit()

total = 0
for i in range(1, n, 2):
    total += (area(radiuses[i-1]) - area(radiuses[i]))

if n%2 != 0:
    total += area(radiuses[n-1])

print(total)