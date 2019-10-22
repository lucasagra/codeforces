import math
tests = int(input())
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
           'w', 'x', 'y', 'z']

def getLetter(B, initpos, power, X):
    #print("pos inicial",initpos, "potencia", power)

    relative = X-initpos+1
    #print("relativo", relative)

    total_agrupamentos = int(pow(B, power))
    agrupamento = (relative//power) + (relative % power != 0)
    casa_do_agrupamento = ((relative-1) % power)
    #print(total_agrupamentos, "agrupamentos de", power)
    #print("achar a letra na casa", casa_do_agrupamento, "do agrupamento", agrupamento)

    resp = ''
    for i in range(1, casa_do_agrupamento+2):
        #print("agrupamento", agrupamento)
        aux = int(total_agrupamentos//B)
        #print("aux", aux)
        group = agrupamento // aux + (agrupamento % aux != 0)
        #print("group", group)
        resp = letters[group-1]
        agrupamento -= (group-1)*aux
        total_agrupamentos = aux

    print(resp)


for k in range(tests):
    B, X = map(int, input().split())

    if B == 1:
        print('a')
        continue

    aux = 0
    count = 0

    while aux <= X:
        count += 1
        aux += count * int(pow(B, count))

    aux -= count * int(pow(B, count))
    getLetter(B, aux, count, X)

# a b aa ab ba bb
# aaa aab aba abb baa bab bba bbb
# 012 345 678 901 234 567 890 123

# aaaa aaaa aaaa aaaa baaa baaa baaa baaa caaa caaa caaa caaa daaa daaa daaa daaa


# a b c aa ab ac ba bb bc ca cb cc aaa aab aac aba
# 0 1 2 34 56 78 90 12 34 56 78 90 123 456<< 789 012

# a b c d aa ab ac ad ba bb bc bd ca cb cc cd da db dc dd aaa
# 0 1 2 3 45 67 89 01 23 45 67 89 01 23 45 67 89 01 23 45

# aa ab ac ad ba bb bc bd ca cb cc cd da db dc dd
# 01 23 45 67 89 01 23 45 67 89 01 23 45 67 89 01
# aaaa aaab aaac aaad aaba aabc aabd aaca aacb aacc aacd aada aadb aadc aadd abaa
# abbb abbc abcc abcd baaa baab babb babc bacc bacd badd bbaa bbab bbac bbad bbba bbbb bbbc bbbd
# bbca bbcb bbcc bbcd bbda bbdb bbdc bbdd