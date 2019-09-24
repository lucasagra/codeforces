n, t = map(int, input().split())
times = list(map(int, input().split()))

start = -1
for i in range(len(times)):
    if times[i] <= t:
        start = i
        break

if start == -1:
    print(0)
    exit()

start_i = start
end_i = start
cur = 1
max = 1
time_holder = times[start]

end_i += 1
while end_i < n:
    next_time = times[end_i]

    if time_holder + next_time <= t:
        time_holder += next_time

        cur += 1
        if cur > max:
            max = cur

        end_i += 1

    else:
        time_holder -= times[start_i]
        cur -= 1
        start_i += 1


print(max)