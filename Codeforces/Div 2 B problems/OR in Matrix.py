import copy

m, n = map(int, input().split())
mat = [list(map(int, input().split())) for x in range(m)]
mat2 = copy.deepcopy(mat)
matResp = [[0 for x in range(n)] for x in range(m)]


def checkAllDirFull(i, j):
    global mat

    aux = j + 1
    while aux < n:
        if mat[i][aux] == 0:
            return False
        aux += 1

    aux = j - 1
    while aux >= 0:
        if mat[i][aux] == 0:
            return False
        aux -= 1

    aux = i + 1
    while aux < m:
        if mat[aux][j] == 0:
            return False
        aux += 1

    aux = i - 1
    while aux >= 0:
        if mat[aux][j] == 0:
            return False
        aux -= 1
    return True


def change(i, j):
    global mat, mat2, matResp

    matResp[i][j] = 1
    mat2[i][j] = 2

    aux = j+1
    while aux < n:
        mat2[i][aux] = 2
        aux += 1

    aux = j-1
    while aux >= 0:
        mat2[i][aux] = 2
        aux -= 1

    aux = i + 1
    while aux < m:
        mat2[aux][j] = 2
        aux += 1

    aux = i-1
    while aux >= 0:
        mat2[aux][j] = 2
        aux -= 1


def process():
    global mat

    for i in range(m):
        for j in range(n):
            if mat[i][j] == 1:
                if checkAllDirFull(i, j):
                    change(i, j)


def check():
    for i in range(m):
        for j in range(n):
            if mat2[i][j] == 1:
                return False

    return True


def printMat(matrix):
    if len(matrix[0]) == 1:
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                print(matrix[i][j])

    else:
        for i in range(len(matrix)):
            for j in range(len(matrix[0])-1):
                print(matrix[i][j], end=' ')
            print(matrix[i][j+1], end='\n')


process()

if check():
    print("YES")
    printMat(matResp)
else:
    print("NO")