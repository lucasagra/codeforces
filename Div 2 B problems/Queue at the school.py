size, swap = map(int, input().split())
qu = list(input())

for i in range(swap):
        x = 0
        while x < size-1:
            if qu[x] == 'B' and qu[x+1] == 'G':
                qu[x], qu[x+1] = qu[x+1], qu[x]
                x += 1
            x+=1


for x in range(len(qu)):
    print(qu[x], end='')