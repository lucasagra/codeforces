size = int(input())
s = list(input())

def change(char):
    if char == 'a':
        return 'b'
    else:
        return 'a'

count = 0
for i in range(0, size, 2):
    if s[i] == s[i+1]:
        s[i] = change(s[i])
        count+=1

print(count)
for char in s:
    print(char, end='')

