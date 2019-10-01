days, hours = map(int, input().split())
time = [list(map(int,input().split())) for i in range(days)]

min_sum = 0
max_sum = 0
resp = [0] * days
remaining = hours

for i in range(days):
    min_sum += time[i][0]
    max_sum += time[i][1]

    resp[i] = time[i][0]
    remaining -= time[i][0]


if hours < min_sum or hours > max_sum:
    print("NO")
    exit()

i = 0
while remaining > 0:
    dif = time[i][1] - time[i][0]
    aux = min(dif, remaining)
    resp[i] += aux
    remaining -= aux
    i += 1

print("YES")
for day in resp:
    print(day, end=' ')