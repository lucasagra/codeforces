n = int(input())

cards = [list(map(int,input().split())) for k in range(n)]

for card in cards:
    card[0], card[1] = card[1], card[0]

cards = sorted(cards, reverse=True)

count = 1
points = 0
i = 0
while i < n and count > 0:
    count -= 1

    count += cards[i][0]
    points += cards[i][1]

    i+=1

print(points)
