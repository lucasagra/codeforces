qtd = int(input())
nums = list(map(int, input().split()))

dif = 0
neg_count = 0
count0 = 0

for num in nums:
    if num < 0:
        aux = num + 1
        dif += abs(aux)
        neg_count += 1
    elif num > 0:
        dif += num - 1
    else:
        count0 += 1

if count0 > 1:
    dif += count0-1
    count0 = 1

if neg_count%2 != 0:
    if count0 == 1:
        dif += 1
    else:
        dif += 2
else:
    dif += count0

print(dif)