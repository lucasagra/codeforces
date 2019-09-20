size, k = map(int, input().split())
array = sorted(list(map(int, input().split())))

median_pos = size//2

increase_pos = list()
dif = list()
for x in range(median_pos+1, size):
    cur = array[x]
    prev = array[x - 1]

    if cur != prev:
        increase_pos.append(x)
        dif.append(cur-prev)


increased = 0
stop = size
for x in range(len(increase_pos)):
    dif_range = increase_pos[x] - median_pos
    k_waste = dif_range * dif[x]

    if k_waste > k:
        stop = increase_pos[x]
        break

    increased += dif[x]
    k -= k_waste
    stop = increase_pos[x] + 1


num = stop - size//2
times = k // num
result = increased + array[median_pos] + times

print(result)