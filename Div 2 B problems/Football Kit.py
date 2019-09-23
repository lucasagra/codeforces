n = int(input())
colors = [tuple(map(int, input().split())) for x in range(n)]
resp = [[0, 0] for x in range(n)]


for i in range(n):
    home = colors[i][0]
    #resp[i][0] += n-1

    for j in range(n):
        if i != j:
            if home != colors[j][1]:
               resp[j][1] += 1
            else:
                resp[j][0] += 1


numgames = n*(n-1)
gamespteam = numgames/n

print(numgames, gamespteam)

print(colors)
for r in resp:
    print(r[0], r[1])
