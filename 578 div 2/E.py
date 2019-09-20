num = int(input())
words = input().split()
result = ""

def compare(str1, str2):

    if len(str1) == 0:
        # print("+ " + str2)
        return str2

    for i in range(len(str1)):
        j = 0

        while (i+j < len(str1) and j < len(str2)) and str1[i+j] == str2[j]:

            if i+j == len(str1) - 1:
                # print("+ " + str2[j+1:])
                return str2[j+1:]
            j += 1

    # print("+ " + str2)
    return str2


for x in range(len(words)):
    # print(result+"[" + str(abs(dif)) + ":] = " + result[abs(len(result)-len(words[x])):])

    if len(result) > len(words[x]):
        result += compare(result[len(result) - len(words[x]):], words[x])

    else:
        result += compare(result, words[x])

print(result)
#
# def partial(s):
#     g, pi = 0, [0] * len(s)
#     for i in range(1, len(s)):
#         while g and (s[g] != s[i]):
#             g = pi[g - 1]
#         pi[i] = g = g + (s[g] == s[i])
#
#     return pi
#
#
# def main():
#     n = int(input())
#     w = input().split()
#     res = list(w[0])
#
#     for j in range(n - 1):
#         wj = list(w[j + 1])
#         # print(wj)
#
#         nj = min(len(wj), len(res))
#         # print(nj)
#
#         wj.append('\0')
#         wj.extend(res[-nj:])
#
#         print(wj)
#         print(partial(wj)[-1])
#
#         for i in range(partial(wj)[-1]):
#             res.pop()
#         res.extend(list(w[j + 1]))
#
#         # print(res)
#
#     print(''.join(res))
#
# main()