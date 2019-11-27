n, m, k = map(int, input().split())

players = []
for x in range(m+1):
    players.append(int(input()))

def countbin(num):

    b = bin(num)[2:]
    count = 0
    for x in range(len(b)):
        if b[x] == '1':
            count += 1

    return count

friends = 0

for x in range(m):
    if countbin(players[m] ^ players[x]) <= k:
        friends += 1

print(friends)