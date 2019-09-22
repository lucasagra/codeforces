x1, y1, x2, y2 = map(int, input().split())
x3, y3, x4, y4 = map(int, input().split())
x5, y5, x6, y6 = map(int, input().split())

def checkHeight():
    # if ret2 is inside ret1
    if x3 > x1 and x4 < x2:
        #if ret3 > ret1
        if x5 <= x1 and x6 >= x2:
            return True
        else:
            return False

    #if ret2 is intersecting part of ret1
    elif (x3 > x1 and x3 < x2 and x4 >= x2) or (x4 < x2 and x4 > x1 and x3 <= x1):
        #upper part
        if x3 > x1:
            if x5 <= x1 and x6 >= x3:

                return True
            else:
                return False
        #bottom part
        else:
            if x5 <= x4 and x6 >= x2:
                return True
            else:
                return False

    # if ret2 is not intersecting PART of ret1
    else:
        #if ret2 cover all ret1
        if x3 <= x1 and x4 >= x2:
            return True
        else:
            #if ret3 cover all ret1
            if x5 <= x1 and x6 >= x2:
                return True
            else:

                return False

def checkHeight2():
    # if ret2 is inside ret1
    if y3 > y1 and y4 < y2:
        #if ret3 > ret1
        if y5 <= y1 and y6 >= y2:
            return True
        else:
            return False

    #if ret2 is intersecting part of ret1
    elif (y3 > y1 and y3 < y2 and y4 >= y2) or (y4 < y2 and y4 > y1 and y3 <= y1):
        #upper part
        if y3 > y1:
            if y5 <= y1 and y6 >= y3:
                return True
            else:
                return False
        #bottom part
        else:
            if y5 <= y4 and y6 >= y2:
                return True
            else:
                return False

    # if ret2 is not intersecting PART of ret1
    else:
        #if ret2 cover all ret1
        if y3 <= y1 and y4 >= y2:
            return True
        else:
            #if ret3 cover all ret1
            if y5 <= y1 and y6 >= y2:
                return True
            else:
                return False

def checkSide():
    #se 1 dos dois cobre toda a altura
    if (x3 <= x1 and x4 >= x2):
        if y3 <= y1 and y4 >= y2:
            return True
        else:
            return False
    elif (x5 <= x1 and x6 >= x2):
        if y5 <= y1 and y6 >= y2:
            return True
        else:
            return False

    # se cada um cobre uma parte
    else:
        if (y3 <= y1 and y4 >= y2) and (y5 <= y1 and y6 >= y2):
            return True
        else:
            return False

def checkSide2():
    #se 1 dos dois cobre toda a altura
    if (y3 <= y1 and y4 >= y2):
        if x3 <= x1 and x4 >= x2:
            return True
        else:
            return False
    elif (y5 <= y1 and y6 >= y2):
        if x5 <= x1 and x6 >= x2:
            return True
        else:
            return False
    else:
    #se cada um cobre uma parte
        if (x3 <= x1 and x4 >= x2) and (x5 <= x1 and x6 >= x2):
            return True
        else:
            return False


if (checkHeight() == False) or (checkHeight2() == False):
    print("YES")
else:
    if checkSide() or checkSide2():
        print("NO")
    else:
        print("YES")
