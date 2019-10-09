tests = int(input())
s = ''
def shots():
    shots = 0
    for m in (monsters):
        if m > (r*shots):
            shots += 1
        else:
            return str(shots)

    return str(shots)

for k in range(tests):
    n, r = map(int, input().split())
    monsters = sorted(list(set(map(int, input().split()))), reverse=True)
    s += shots() + '\n'

print(s)