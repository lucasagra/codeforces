n = int(input())

for k in range(n):
    num = int(input())
    count = 0
    while num != 1:
        count += 1
        if num%2 == 0:
            num = num//2
        elif num%3 == 0:
            num = (2*num)//3
        elif num%5 == 0:
            num = (4*num)//5
        else:
            count = -1
            break

    print(count)