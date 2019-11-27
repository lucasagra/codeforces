round_n, made_n = map(int, input().split())
round = list(map(int, input().split()))
made = list(map(int, input().split()))

i = 0
j = 0
while i < round_n:
    while j < made_n:
        if made[j] >= round[i]:
            j += 1
            i += 1
            break
        j += 1

    if j == made_n:
        break

print(round_n - i)