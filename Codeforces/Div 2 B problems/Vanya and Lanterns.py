num_lanterns, len_street = map(int, input().split())
pos_lanterns = list(sorted(map(int, input().split())))

max = pos_lanterns[0]

for x in range(num_lanterns-1):
    dif = (pos_lanterns[x+1] - pos_lanterns[x])/2
    if dif > max:
        max = dif

if len_street - pos_lanterns[num_lanterns-1] > max:
    max = len_street - pos_lanterns[num_lanterns-1]

print("%.10f" % (max))