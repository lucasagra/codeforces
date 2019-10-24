q = int(input())

def getAllCombinations(object_list):
    uniq_objs = set(object_list)
    combinations = []
    for obj in uniq_objs:
        for i in range(0, len(combinations)):
            combinations.append(combinations[i] + obj)
        combinations.append(obj)

    return combinations

power3 = [pow(3,i) for i in range(10)]
combs = sorted(getAllCombinations(power3))

def findElement(n):
    for r in combs:
        if r >= n:
            return r


for k in range(q):
    n = int(input())
    print(findElement(n))




