types = int(input())
left = list(map(int, input().split()))

def gcd(a,b):
    if (b == 0):
        return a
    else:
         return gcd (b, a % b)


m = max(left)

for i in range(len(left)):
    left[i] = m-left[i]

res = left[0]
for c in left[1::]:
    res = gcd(res , c)

count = 0

for num in left:
    count += num // res

print(count, res)