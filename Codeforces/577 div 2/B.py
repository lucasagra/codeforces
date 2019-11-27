size = int(input())
array = list(map(int, input().split()))

def test(array, size):

    ar_sum = sum(array)
    if ar_sum % 2 != 0:
         return False

    list_sums = [int(0) for i in range(size)]
    for x in range(size):
        list_sums[x] = ar_sum - array[x]
        if array[x] > list_sums[x]:
            return False

    return True


if test(array, size):
    print("YES")
else:
    print("NO")

