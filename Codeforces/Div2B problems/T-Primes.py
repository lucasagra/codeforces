import math

size = int(input())
nums = list(map(int, input().split()))

lim = 10**6
ar = [1]*(lim+1)

### T-Primes set
r = {4}

### Crivo de aristotenes
for i in range(2, lim):
    if ar[i] == 1:
        r.add(i*i)
        for j in range(i*i, lim, i): ### Cancela todos os multiplos de i
            ar[j] = 0

### Works but TLE

# def isPrime(n):
#     if n == 0 or n == 1:
#         return False
#     elif n == 2 or n == 3:
#         return True
#     elif n%2 == 0:
#         return False
#     else:
#         for i in range(3, int(math.sqrt(n))+1, 2):
#             if n%i == 0:
#                 return False
#
#         return True
#

for num in nums:
    if num in r:
        print("YES")
    else:
        print("NO")