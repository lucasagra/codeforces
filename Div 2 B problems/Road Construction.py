cities, m = map(int, input().split())

status = [0] * (cities)

for i in range(m):
    a, b = map(int, input().split())
    status[a-1] = 1
    status[b-1] = 2

central = 0
for i in range(cities):
    if status[i] == 0:
        central = i
        break

print(cities-1)
for i in range(cities):
    if i != central:
        print(i+1, central+1)
