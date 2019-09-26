from math import ceil, floor
import copy

num_piles, num_colors = map(int, input().split())
piles = list(map(int, input().split()))
piles_sorted = sorted(copy.deepcopy(piles))

p_h = [[(piles[x] % num_colors) if (piles[x] % num_colors) != 0 else num_colors, ceil(piles[x] / num_colors)] for x in range(num_piles)]
p_l = []
p_h_sorted = [[(piles_sorted[x] % num_colors) if (piles_sorted[x] % num_colors) != 0 else num_colors, ceil(piles_sorted[x] / num_colors)] for x in range(num_piles)]
p_l_sorted = []

for i in range(num_piles):
    i1 = num_colors - p_h_sorted[i][0]
    i2 = 0
    if i1 != 0:
        i2 = (piles_sorted[i] - (p_h_sorted[i][1] * p_h_sorted[i][0])) // i1
    else:
        i2 = piles_sorted[i] - (p_h_sorted[i][1] * p_h_sorted[i][0])

    p_l_sorted.append([i1, i2])

    j1 = num_colors-p_h[i][0]
    j2 = 0
    if j1 != 0:
        j2 = (piles[i] - (p_h[i][1] * p_h[i][0])) // j1
    else:
        j2 = piles[i] - (piles[i] - (p_h[i][1] * p_h[i][0]))

    p_l.append([j1,j2])


def check():

    if p_h_sorted[num_piles - 1][0] <= p_h_sorted[0][0]:
        if p_h_sorted[num_piles - 1][1] - p_h_sorted[0][1] > 1:
            return False

    elif p_h_sorted[num_piles - 1][1] - p_l_sorted[0][1] > 1:
        return False

    return True

def prtline(i):

    cur_color = 1
    aux = 0

    max = p_h[i][1]
    for j in range(p_h[i][0]*p_h[i][1]):

        if aux >= max:
            aux = 0
            cur_color += 1

        print(cur_color, end=' ')
        aux += 1

    max = p_l[i][1]
    for j in range(p_l[i][0] * p_l[i][1]):
        if aux >= max:
            aux = 0
            cur_color += 1

        print(cur_color, end=' ')
        aux += 1

    print()


def prt():
    global piles
    for i in range(num_piles):
        prtline(i)


if check():
    print("YES")
    prt()
else:
    print("NO")