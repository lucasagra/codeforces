n, s, t = map(int, input().split())
shufl = list(map(int, input().split()))

c = 0

def test():
    global c, s, t

    while c < n:
        if s == t:
            return True
        else:
            s = shufl[s-1]
        c+=1

    return False


if test():
    print(c)
else:
    print("-1")