p, q, l, r = map(int, input().split())
resp = [False for x in range(1001)]

Z = []
X = []
for i in range(p):
    Z.append(tuple(map(int, input().split())))
for i in range(q):
    X.append(list(map(int, input().split())))

for ls in X:
    ls[0] += l
    ls[1] += l

r -= l

def turnOn(fr, to):
    global resp
    for i in range(fr, to+1):
        resp[i] = True


def process(vary, fixed):
    # vary (0 - 5, 10 - 15)
    # fixed (5, 15)
    if (vary[0] >= fixed[0] and vary[0] <= fixed[1]) or (vary[1] >= fixed[0] and vary[1] <= fixed[1]):
        #turn on 0 to min(r, fixed[1] - vary[0])
        turnOn(0, min(r, fixed[1]-vary[0]))
    elif vary[1] < fixed[0]:
        if vary[1]+r >= fixed[0]:
            aux = fixed[0] - vary[1]
            turnOn(aux, min(r, aux+((fixed[1]-fixed[0]) + (vary[1]-vary[0]))))


for i in X:
    for j in Z:
        process(i, j)

count = 0
for r in resp:
    if r:
        count += 1

print(count)