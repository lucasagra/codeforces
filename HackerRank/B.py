pool = input()

def lolo(pool):
    size = len(pool)
    count8 = 0

    for x in range(size):
        if pool[x] == "8":
            count8 += 1

    possibles = size//11

    return min(possibles, count8)

print(lolo(pool))
