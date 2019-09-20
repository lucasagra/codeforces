import numpy as np

def test_cell(max, arr, x, y):

    #test right
    if len(arr[x]) - x  < max:
        # print("a")
        return False
    elif len(arr[y]) - y < max:
        # print("b")
        return False

    sx = 0
    sy = 0
    memo = y

    while sx + x < len(arr) and sx < max:
        while sy + y < len(arr[0]) and sy < max:
            # print(sx+x, sy+y)
            if arr[sx+x][sy+y] == 0:
                # print(sx, sy, "a")
                return False

            sy += 1

        sy = 0
        sx += 1

    return True

def test_max(arr, max):
    x = 0
    y = 0


    while x < len(arr):
        while y < len(arr[0]):
            # print(x, y)
            if arr[x][y] == 0:
                y += 1
                continue

            if test_cell(max, arr, x, y):
                return True

            y += 1
        y = 0
        x += 1

    return False


def largestMatrix(arr):
    max = min(arr_rows, arr_columns)

    cur = 0
    while cur < max-1:
        print(cur, max)
        if test_max(arr, (max + cur)//2):
            cur = (max + cur)//2
        else:
            max = (max + cur)//2

    if test_max(arr, cur+1):
        cur += 1

    return cur

    # print(test_max(arr, 1))


# Write your code here


# Write your code here

arr_rows = int(input().strip())
arr_columns = int(input().strip())

arr = []

for _ in range(arr_rows):
    arr.append(list(map(int, input().rstrip().split())))

result = largestMatrix(arr)
print(result)
