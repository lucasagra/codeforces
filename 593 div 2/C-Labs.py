n = int(input())

def printSet(i, n):
    global flag
    print(i, end=' ')
    cur = i
    for k in range(n-1):
        if k%2 == 0:
            cur += (1 + 2*(n-i))
        else:
            cur += (1 + 2*(i-1))

        print(cur, end=' ')


for i in range(1, n+1):
    printSet(i,n)
    print()