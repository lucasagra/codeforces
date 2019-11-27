num_houses, num_tasks = map(int, input().split())
tasks = list(map(int, input().split()))

pos = 1
steps = 0

for x in range(num_tasks):
    if tasks[x] > pos:
        steps += tasks[x] - pos
    elif tasks[x] < pos:
        steps += num_houses - (pos - tasks[x])
    else:
        continue

    pos = tasks[x]


print(steps)