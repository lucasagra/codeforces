n, m = map(int, input().split())

answers = []

for x in range(n):
    answers.append(input())


points = list(map(int, input().split()))

counting = [ [ 0 for i in range(5) ] for j in range(m) ]

for x in range(len(answers)):
    for i in range(m):
        if answers[x][i] == 'A':
            counting[i][0] += 1
        elif answers[x][i] == 'B':
            counting[i][1] += 1
        elif answers[x][i] == 'C':
            counting[i][2] += 1
        elif answers[x][i] == 'D':
            counting[i][3] += 1
        elif answers[x][i] == 'E':
            counting[i][4] += 1

total = 0

for question in range(len(counting)):
    best_count = max(counting[question])
    total += best_count*points[question]

print(total)