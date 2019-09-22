from math import sqrt, ceil
r, x, y, x1, y1 = map(int, input().split())
dist = sqrt((x1-x)**2 + (y1-y)**2)/2
# print(dist)
moves = ceil(dist/r)
print(moves)