queries = int(input())

def find1(list):
    x = 0
    while list[x] != 1:
        x+=1

    return x


def clockleft(list, start):
    reps = len(list)-1

    while reps > 0:
        if list[start % len(list)] != list[(start + 1) % len(list)] -1:
            return False

        start += 1
        reps -= 1

    return True


def clockright(list, start):
    reps = len(list)-1

    while reps > 0:

        if list[start % len(list)] != list[(start - 1) % len(list)] -1:
            return False

        start -= 1
        reps -= 1

    return True

for query in range(queries):

    num_students = int(input())
    order = list(map(int, input().split()))

    start = find1(order)

    if clockleft(order, start) or clockright(order, start):
        print("YES")
    else:
        print("NO")