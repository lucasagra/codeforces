n = int(input())
nums = list(map(int, input().split()))

if n == 1:
    print(1)
    exit()
if n == 2:
    print(2)
    exit()

max = 2
cur = 2
for i in range(2, n):
    if nums[i] == nums[i-1] + nums[i-2]:
        cur += 1
    else:
        cur = 2

    if cur > max:
        max = cur

print(max)
