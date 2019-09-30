height, width = map(int, input().split())
hs = list(map(int, input().split()))
ws = list(map(int, input().split()))

mat = [[0 for x in range(width)] for y in range(height)]

for i in range(len(hs)):
    for j in range(min(width, hs[i])):
        mat[i][j] += 1

for i in range(len(ws)):
    for j in range(min(height, ws[i])):
        mat[j][i] += 1

def check():
    for i in range(len(hs)):
        if hs[i] < width:
            if mat[i][hs[i]] > 0:
                return False

    for i in range(len(ws)):
        if ws[i] < height:
            if mat[ws[i]][i] > 0:
                return False

    return True


if not check():
    print(0)
    exit()

for i in range(len(hs)):
    for j in range(min(width, hs[i]+1)):
        mat[i][j] = 1

for i in range(len(ws)):
    for j in range(min(height, ws[i]+1)):
        mat[j][i] = 1

count0 = 0
for i in mat:
    for num in i:
        if num == 0:
            count0 += 1


def printmat():
    for i in mat:
        print(i)
    print()

    print(count0)


resp = 0
if count0 != 0:
    resp = ((2**(count0))%1000000007)
else:
    resp = 1


print(resp)