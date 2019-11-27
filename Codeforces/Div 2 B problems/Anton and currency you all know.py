num = list(input())

def test():
    flag = False
    best = 0
    
    for i in range(len(num)):

        if int(num[i])%2 == 0:

            flag = True
            best = i

            if int(num[i]) < int(num[len(num) - 1]):
                break

    if flag:
        num[best], num[len(num) - 1] = num[len(num) - 1], num[best]
        return True
    else:
        return False


if test():
    for n in num:
        print(int(n), end='')
else:
    print("-1")

