s = list(input())

num4 = 0
num7 = 0
for c in s:
    if c == '4':
        num4+=1
    elif c == '7':
        num7+=1

if num4 == 0 and num7 == 0:
    print(-1)
elif num4 >= num7:
    print(4)
else:
    print(7)