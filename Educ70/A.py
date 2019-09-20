tasks = int(input())

def getOffset(string, start):
    i = 0

    while string[len(string)-1-i-start] == '0':
        i += 1

    return i

for x in range(tasks):

    bin1 = input()
    bin2 = input()

    offset_str2 = getOffset(bin2, 0)
    offset_str1 = getOffset(bin1, offset_str2)

    print(offset_str1)