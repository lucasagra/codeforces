word1 = str.lower(input())
word2 = str.lower(input())

letters1 = [0 for x in range(26)]
letters2 = [0 for x in range(26)]

for letter in word1:
    letters1[ord(letter)-97] += 1

for letter in word2:
    letters2[ord(letter)-97] += 1


def checkSubString():
    global word1, word2

    check = [0 for x in range(len(word2))]
    memo = 0
    for i in range(len(word2)):
        for j in range(memo, len(word1)):
            memo = j+1
            if word2[i] == word1[j]:
                check[i] = 1
                break

    for case in check:
        if case == 0:
            return False

    return True


def decide():
    global letters1, letters2
    flagAutomaton = False
    flagArray = not checkSubString()

    for i in range(26):
        if letters1[i] < letters2[i]:
            print('need tree')
            return

    for i in range(26):
        if letters1[i] > letters2[i]:
            flagAutomaton = True
            break

    if flagArray and flagAutomaton:
        print('both')
    elif flagArray:
        print('array')
    else:
        print('automaton')


decide()
