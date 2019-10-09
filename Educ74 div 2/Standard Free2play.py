q = int(input())

for k in range(q):
    h, n = map(int, input().split())
    plat = list(map(int, input().split()))

    crystals = 0
    i = 0
    while i < n-1:
        if plat[i]-plat[i+1] > 1:
            plat[i] = plat[i+1]+1

        if plat[i+1]+1 == plat[i]:
            if i+2 >= n:
                if plat[i] >= 3:
                    crystals += 1
            elif plat[i+2]+1 != plat[i+1]:
                crystals += 1
                plat[i+1] -= 1
                i-=1


            i+=1

        i += 1

    print(crystals)