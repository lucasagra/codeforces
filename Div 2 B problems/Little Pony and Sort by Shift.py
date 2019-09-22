n = int(input())
ar = list(map(int, input().split()))

count = 0
flag = False

def test():
    global count
    global flag

    min = 999999999999

    for i in range(n-1):
        if not flag:
            if ar[i] < min:
                min = ar[i]

        if ar[i] > ar[i+1] and flag:
            return False
        elif ar[i] > ar[i + 1] and not flag:
            if ar[i + 1] > min:
                return False
            flag = True
            count += 1
        elif ar[i] <= ar[i+1] and flag:
                if ar[i + 1] > min:
                    return False
                count += 1
        elif ar[i] <= ar[i+1] and not flag:
            continue

    return True

if test():
    print(count)
else:
    print("-1")

