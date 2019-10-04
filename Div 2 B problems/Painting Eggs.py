### TLE IN PYTHON, but OK IN C
n = int(input())

sumA = 0
sumG = 0
r = []

for i in range(n):
    a, g = map(int, input().split())

    if abs((sumA+a)-sumG) < abs(sumA-(sumG+g)):
        sumA+=a
        r.append('A')
    else:
        sumG+=g
        r.append('G')

    diff = abs(sumA-sumG)

    if diff > 500:
        print(-1)
        exit()

for c in r:
    print(c, end='')