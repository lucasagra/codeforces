n = int(input())
dur = list(map(int, input().split()))

dur2 = []

for i, d in enumerate(dur):
    dur2.append((d, i))

dur2.sort()

def shotsNeeded(dur, cans_down):
    return(dur*cans_down + 1)

shots = 0
cans_down = 0
order_down = []

for i in range(n-1, -1, -1):
    shots += shotsNeeded(dur2[i][0], cans_down)
    cans_down += 1
    order_down.append(dur2[i][1] + 1)

print(shots)
for i in range(len(order_down)-1):
    print(order_down[i], end=' ')
print(order_down[len(order_down)-1], end='')