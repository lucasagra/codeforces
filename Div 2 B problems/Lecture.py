len_speech, num_words = map(int, input().split())

words = {}

for x in range(num_words):
    in1, in2 = map(str, input().split())
    words[in1] = in2

speech = list(input().split())

for x in range(len_speech-1):
    if len(speech[x]) > len(words[speech[x]]):
        print(words[speech[x]], end=' ')
    else:
        print(speech[x], end=' ')

if len(speech[len_speech-1]) > len(words[speech[len_speech-1]]):
    print(words[speech[len_speech-1]], end='')
else:
    print(speech[len_speech-1], end='')
