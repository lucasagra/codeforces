q = int(input())

for k in range(q):
    stds = int(input())
    skills = sorted(list(map(int, input().split())))

    if stds == 1:
        print(1)
        continue

    flag = False
    for i in range(stds-1):
        if skills[i+1]-skills[i] == 1:
            flag = True
            break

    if flag:
        print(2)
    else:
        print(1)

