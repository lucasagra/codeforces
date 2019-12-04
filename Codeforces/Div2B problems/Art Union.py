pic, painters = map(int, input().split())
times = [list(map(int, input().split())) for x in range(pic)]

s = ''
for i in range(pic):
    for j in range(painters):
        if i == 0:
            if j > 0:
                times[i][j] += times[i][j-1]
        else:
            if j == 0:
                times[i][j]+= times[i-1][j]
            else:
                times[i][j] += max(times[i-1][j], times[i][j-1])

    if i == pic-1:
        s += str(times[i][painters-1])
    else:
        s += str(times[i][painters-1]) + ' '

print(s)




