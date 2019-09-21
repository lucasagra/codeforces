x1, y1, x2, y2 = map(int, input().split())
x3, y3, x4, y4 = map(int, input().split())
x5, y5, x6, y6 = map(int, input().split())

def checkHeight():
    if x3 > x1 and x4 < x2:
        #terceiro ret tem que ser maior que o branco inteiro
        if x5 <= x1 and x6 >=x2:
            return True
        else:
            return False
    elif (x3 > x1 and x4 > x2) or (x4 < x2 and x3 < x1):
        #terceiro ret tem que ser maior que a sobra
        if x3 > x1:
            if x5 <= x1 and x6 >= x3:
                return True
            else:
                return False
        else:
            if x5 <= x4 and x6 >= x2:
                return True
            else:
                return False

    else:
        #se o seg reto cobrir tudo ok
        if x3 <= x1 and x4 >= x2:
            return True
        else:
            if x5 <= x1 and x6 >= x2:
                return True
            else:
                return False

def checkHeight2():
    if y3 > y1 and y4 < y2:
        #terceiro ret tem que ser maior que o branco inteiro
        if y5 <= y1 and y6 >= y2:
            return True
        else:
            return False
    elif (y3 > y1 and y4 > y2) or (y4 < y2 and y3 < y1):
        #terceiro ret tem que ser maior que a sobra
        if y3 > y1:
            if y5 <= y1 and y6 >= y3:
                return True
            else:
                return False
        else:
            if y5 <= y4 and y6 >= y2:
                return True
            else:
                return False

    else:
        #se o seg reto cobrir tudo ok
        if y3 <= y1 and y4 >= y2:
            return True
        else:
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
    else:
    #se cada um cobre uma parte
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


if (not checkHeight()) or (not checkHeight2()):
    print("YES")
else:
    if checkSide() or checkSide2():
        print("NO")
    else:
        print("YES")
