l, r = map(int, input().split())

def check(num):
    num = str(num)
    count = [0]*10
    for char in num:
        n = ord(char)-56
        count[n] += 1
        if count[n] > 1:
            return False

    return True


for i in range(l, r+1):
    if check(i):
        print(i)
        exit()

print(-1)