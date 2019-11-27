n = int(input())
weights = list(map(int, input().split()))


count = [int(0) for x in range(150001)]
count_aux = [int(0) for x in range(150001)]


for fighter in weights:
    count[fighter-1] += 1

last0 = -1
for x in range(len(count)):
    if count[x] == 0 and count_aux[x] == 0:
        last0 = x
    elif count[x] == 0 and count_aux[x] != 0:
        last0 = -1

    while count[x] > 1:
        if (x != 0) and (count[x-1] == 0) and (count_aux[x-1] == 0):
            count[x-1] += 1
            count[x] -= 1
        elif (x != len(count)-1) and (count[x+1] == 0) and (count_aux[x+1] == 0):
            count_aux[x+1] += 1
            count[x] -= 1
       # elif last0 != -1:





resp = 0
for x in range(len(count)):
    if count[x] > 0 or count_aux[x] > 0:
        resp += 1

aux = [int(x) for x in range(1, 21)]
print(aux)
print(count[0:20])
print(count_aux[0:20])

print(resp)