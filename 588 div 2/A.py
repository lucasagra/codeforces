bags = sorted(list(map(int, input().split())))

if bags[3] == bags[2] + bags[1] + bags[0]:
    print("YES")
elif bags[3] + bags[2] == bags[1] + bags[0]:
    print("YES")
elif bags[3] + bags[0] == bags[1] + bags[2]:
    print("YES")
elif bags[3] + bags[1] == bags[2] + bags[0]:
    print("YES")
else:
    print("NO")