n = int(input())

for i in range(1, n+1):
    cur = i
    s = str(i) + ' '
    for k in range(n - 1):
        if k % 2 == 0:
            cur += (1 + 2 * (n - i))
        else:
            cur += (1 + 2 * (i - 1))
        s += str(cur) + ' '
    print(s)