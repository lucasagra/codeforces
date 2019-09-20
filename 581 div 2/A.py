binary = input()

digits = len(binary)

#print(int(binary, 2))

resp = digits//2

#print(resp)
count1 = 0

if digits%2 != 0:
    for digit in binary:

        if digit == "1":
            count1 += 1

        if count1 == 2:
            resp += 1
            break

print(resp)