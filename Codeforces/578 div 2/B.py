tests = int(input())

def getBlocks(x, dif):
    blocks = 0

    if heights[x] < heights[x+1]:
        blocks = k - dif

        if blocks >= heights[x]:
            return heights[x]
        else:
            return blocks

    else:
        blocks = dif
        heights[x] -= blocks
        if heights[x] >= k:
            return blocks + k
        else:
            return blocks + heights[x]

def getNeeded(dif):
    return dif - k


def test(bag, k, heights):
    for y in range(len(heights)-1):

        dif = abs(heights[y] - heights[y+1])
        if dif <= k:
            bag += getBlocks(y, dif)

        elif heights[y] > heights[y+1]:
            bag += getBlocks(y, dif)

        else:
            blocks_needed = getNeeded(dif)
            if blocks_needed > bag:
                return False
            else:
                bag -= blocks_needed

    return True


for case in range(tests):
    columns, bag, k = map(int, input().split())
    heights = list(map(int, input().split()))

    if test(bag, k, heights):
        print("YES")
    else:
        print("NO")
