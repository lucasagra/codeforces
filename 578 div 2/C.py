n, m, q = map(int, input().split())

aux = 0
if n > m:
    aux = n
    n = m
    m = aux

for questions in range(q):
    sx, sy, ex, ey = map(int, input().split())

    pair1 = ()
    pair2 = ()
    if sx == 1:
        pair1 = (sx, sy)
        pair2 = (ex, ey)
    else:
        pair1 = (ex, ey)
        pair2 = (sx, sy)


    bigger = 0
    smaller = 0
    if sy > ey:
        bigger = sy
        smaller = ey
    else:
        bigger = ey
        smaller = sy

    res1 = pair1[1]*n/m
    res2 = pair2[1]*n/m

    if res1 > res2:
        aux = res1
        res1 = res2
        res2 = aux

    print(res1, res2)
    if (res2-1) - res1 >= 1:
        print("NO")
    else:
        print("YES")
