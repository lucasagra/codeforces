from collections import deque

n, k = map(int, input().split())
messages = list(map(int, input().split()))

contained = set()
fila = deque()

for i in range(n):
    num = messages[i]

    if num not in contained:
        contained.add(num)
        if len(fila) < k:
            fila.append(num)
        else:
            contained.remove(fila.popleft())
            fila.append(num)
    else:
        pass

print(len(fila))
while len(fila) > 1:
    print(fila.pop(), end=' ')
print(fila.pop())
