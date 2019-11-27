n = int(input())
colors = [tuple(map(int, input().split())) for x in range(n)]
resp = [[0, 0] for x in range(n)]

count_home = [0 for x in range(100001)]

for i in range(n):
    resp[i][0] += n - 1
    count_home[colors[i][0]] += 1

for i in range(n):
    color_away = colors[i][1]
    color_home = colors[i][0]
    aux = count_home[color_away]
    resp[i][0] += aux
    resp[i][1] += (n - 1) - aux

for r in resp:
    print(r[0], r[1])