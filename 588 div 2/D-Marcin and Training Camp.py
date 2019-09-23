### WRONG ANSWER


n = int(input())
algo = list(map(int, input().split()))
skill = list(map(int, input().split()))

a = [(skill[x], algo[x]) for x in range(n)]
a = sorted(a)

algsdict = {}
studentsdict = {}

for i in range(60):
    algsdict[i] = []


def processToBinary(num, student_num):
    realbin = bin(num)[2:]
    realbin = realbin[::-1]

    for i in range(len(realbin)):
        if realbin[i] == '1':
            algsdict[i].append(student_num)
            studentsdict[student_num].add(i)

studentsSet = {0}
for i in range(n):
    studentsdict[i] = set()

    processToBinary(algo[i], i)
    studentsSet.add(i)


for i in range(60):
    if len(algsdict[i]) == 1:
        studentToRemove = algsdict[i][0]

        try:
            studentsSet.remove(studentToRemove)
        except:
            1


def checkbetterthanall(i):
    for j in range(len(studentsSet)):
        if i != j:
            setdiff = studentsdict[i] - studentsdict[j]
            if len(setdiff) == 0:
                return False

    return True


aux = len(studentsSet)

toremove = []
for std in studentsSet:
    if checkbetterthanall(std):
        toremove.append(std)

for std in toremove:
    studentsSet.remove(std)


while len(studentsSet)>= 2 and aux != len(studentsSet):
    toremove = []
    for std in studentsSet:
        if checkbetterthanall(std):
            toremove.append(std)

    for std in toremove:
        studentsSet.remove(std)

    aux = len(studentsSet)

sum = 0
for std in studentsSet:
    sum += skill[std]

if len(studentsSet) < 2:
    print(0)
else:
    print(sum)
