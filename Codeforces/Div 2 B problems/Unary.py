r = ""
for char in input():
    if char == '>':
        r += "1000"
    elif char == '<':
        r += "1001"
    elif char == '+':
        r += "1010"
    elif char == '-':
        r += '1011'
    elif char == '.':
        r += '1100'
    elif char == ',':
        r += "1101"
    elif char == '[':
        r += "1110"
    elif char == ']':
        r += "1111"

print(int(r, 2)%1000003)