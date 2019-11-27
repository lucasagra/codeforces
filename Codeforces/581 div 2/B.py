num, min, max = map(int, input().split())

minimum_sum = (1*(num - (min-1)))

for x in range(1, min):
    minimum_sum += 2**x

maximum_sum = 0
aux = 0

for x in range(0, max):
    aux = 2**x
    maximum_sum += aux

maximum_sum += (aux*(num - (max)))

print(minimum_sum, maximum_sum)