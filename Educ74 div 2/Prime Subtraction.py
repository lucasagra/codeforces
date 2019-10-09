n = int(input())

for k in range(n):
    x, y = map(int, input().split())
    if x-y == 1:
        print("NO")
        continue

    print("YES")