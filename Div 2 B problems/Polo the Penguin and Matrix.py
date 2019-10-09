n, m, d = map(int, input().split())
nums = []
for i in range(n):
    nums += list(map(int, input().split()))

dif = nums[0]%d
for n in nums[1:]:
    if n%d != dif:
        print(-1)
        exit()

nums = sorted(nums)
med = nums[len(nums) // 2]

def test(nums, key):
    count = 0
    for num in nums:
        count += abs(num-key)//d

    return count

print(test(nums, med))

### Ternary Search solution
#
# def ternarySearch(l, r, arr):
#     left = l
#     right = r
#     while right - left > 2:
#
#         m1 = left + (right - left)//3
#         m2 = right - (right - left)//3
#
#         f1 = test(nums, arr[m1])
#         f2 = test(nums, arr[m2])
#
#         if f1 > f2:
#             left = m1
#         else:
#             right = m2
#
#     return left, right
#
# l = min(nums)
# r = max(nums)
# arr = [l+(d*x) for x in range((r)//d)]
#
# l = 0
# r = len(arr)-1
# l, r = ternarySearch(l, r, arr)
#
# min = 9999999999999
# for i in range(l, r+1):
#     cur = test(nums, arr[i])
#     if cur < min:
#         min = cur
#
# print(min)
