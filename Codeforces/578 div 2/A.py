n = input()
string = input()
rooms = [0 for x in range(10)]

def left(rooms):

    i = 0
    while rooms[i] != 0:
        i += 1

    rooms[i] = 1

def right(rooms):

    i = 9
    while rooms[i] != 0:
        i -= 1

    rooms[i] = 1

x = 0
while True:
    try:
        if string[x] == 'L':
            left(rooms)
        elif string[x] == 'R':
            right(rooms)
        else:
            rooms[int(string[x])] = 0

        x+=1
    except Exception:
        break

for num in rooms:
    print(num, end = '')