l1 = list(map(int, input().split()))
l2 = list(map(int, input().split()))
l3 = list(map(int, input().split()))
m = [l1, l2, l3]

c1 = m[0][1] + m[0][2]
c2 = m[1][0] + m[1][2]
c3 = m[2][0] + m[2][1]

r2 = (c3-c2+c1)/2
r1 = c3-r2
r3 = c1-r2

print(int(r1), m[0][1], m[0][2])
print(m[1][0], int(r2),  m[1][2])
print(m[2][0], m[2][1], int(r3))


