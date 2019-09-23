n, k = map(int, input().split())
digits = list(input())

if k > 0:
    if n == 1:
        digits[0] = '0'
        k -= 1
    elif digits[0] != '1':
        digits[0] = '1'
        k -= 1

i = 1
while k > 0 and i < n:
    if digits[i] != '0':
        digits[i] = '0'
        k -= 1

    i += 1


for d in digits:
    print(d, end='')