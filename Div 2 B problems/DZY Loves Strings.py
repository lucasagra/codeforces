s = list(input())
n = int(input())
w = list(map(int, input().split()))

def getPos(char):
    return ord(char) - 97

size_string = 0

for i in range(len(s)):
    size_string += w[getPos(s[i])] * (i+1)

max_w = max(w)

for i in range(len(s)+1, len(s)+n+1):
    size_string += i*max_w

print(size_string)