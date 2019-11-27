queries = int(input())


def checksides(list):

    for i in range(0, len(list), 2):
        if list[i] != list[i+1]:
            return False

    return True


def sides(list):

    resp = []
    for i in range(0, len(list), 2):
        resp.append(list[i])

    return resp

def check_areas(sides_list):

    if(len(sides_list) == 2):
        return True

    j = len(sides_list)-1

    for i in range(len(sides_list)//2):
        # print(i, j, "!=", i+1, j-1)
        if(sides_list[i]*sides_list[j] != sides_list[i+1]*sides_list[j-1]):
            return False

        j -= 1

    return True

for query in range(queries):
    num_rect = int(input())

    sticks = sorted(list(map(int, input().split())))

    if checksides(sticks):
        sidesList = sides(sticks)
        # print(sidesList)
        if check_areas(sidesList):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
